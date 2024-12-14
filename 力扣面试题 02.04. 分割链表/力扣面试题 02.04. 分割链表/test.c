/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* partition(struct ListNode* head, int x)
{
    if (head == NULL)
        return head;
    // 创建两个带头链表
    ListNode* lesshead, * lesstail, * greaterhead, * greatertail;
    lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
    greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));

    //
    ListNode* cur = head;
    while (cur) {
        if (cur->val < x) {
            // 尾插
            lesstail->next = cur;
            lesstail = lesstail->next;
        }
        else {
            greatertail->next = cur;
            greatertail = greatertail->next;
        }
        cur = cur->next;
    }

    greatertail->next = NULL;
    //首尾相连
    lesstail->next = greaterhead->next;
    //保存头结点
    ListNode* ret = lesshead->next;
    //释放
    free(lesshead);
    free(greaterhead);
    lesshead = greaterhead = NULL;

    return ret;
}