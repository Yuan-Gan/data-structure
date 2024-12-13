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
    // ����ͷ�ڵ�ֵ����val�������ͨ��ѭ������ɾ��ͷ�ڵ�ֱ��ͷ�ڵ��ֵ������val��������Ϊ��
    while (head != NULL && head->val == val) {
        struct ListNode* del = head;
        head = head->next;
        free(del);
    }

    // ��ʱheadָ���һ������Ҫɾ���Ľڵ����ΪNULL��������ڵ㿪ʼ��������������ڵ�
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