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
    // ����������ͷ����
    ListNode* lesshead, * lesstail, * greaterhead, * greatertail;
    lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
    greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));

    //
    ListNode* cur = head;
    while (cur) {
        if (cur->val < x) {
            // β��
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
    //��β����
    lesstail->next = greaterhead->next;
    //����ͷ���
    ListNode* ret = lesshead->next;
    //�ͷ�
    free(lesshead);
    free(greaterhead);
    lesshead = greaterhead = NULL;

    return ret;
}