#include<stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//    while (cur != NULL)
//    {
//        if (cur->val == val)
//        {
//
//            if (prev == NULL)
//            {
//                head = head->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//        else
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//
//    }
//    return head;
//}
//int main()
//{
//
//
//	return 0;
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    // 处理头节点值等于val的情况，通过循环不断删除头节点直到头节点的值不等于val或者链表为空
    while (head != NULL && head->val == val) {
        struct ListNode* del = head;
        head = head->next;
        free(del);
    }

    // 此时head指向第一个不需要删除的节点或者为NULL，从这个节点开始遍历链表处理后续节点
    struct ListNode* cur = head;
    while (cur != NULL && cur->next != NULL) {
        if (cur->next->val == val) {
            struct ListNode* del = cur->next;
            cur->next = cur->next->next;
            free(del);
        }
        else {
            cur = cur->next;
        }
    }

    return head;
}