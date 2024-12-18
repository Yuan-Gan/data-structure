/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @param m int整型
 * @return int整型
 */
typedef struct ListNode ListNode;
//创建结点
ListNode* buy_node(int x)
{
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
    newnode->val = x;
    newnode->next = NULL;
    return newnode;
}
//创建环形链表
ListNode* create_circle(int n)
{
    //头节点
    ListNode* phead = buy_node(1);
    ListNode* ptail = phead;
    for (int i = 2; i <= n; i++)
    {
        //尾插
        ListNode* newnode = buy_node(i);
        ptail->next = newnode;
        ptail = ptail->next;
    }
    ptail->next = phead;
    return ptail;
}
int ysf(int n, int m)
{
    //1.先创建n个元素的环
    ListNode* prev = create_circle(n);
    ListNode* pcur = prev->next;
    int count = 1;
    while (pcur->next != pcur)
    {
        if (count == m)
        {
            //删除
            prev->next = prev->next->next;
            free(pcur);
            pcur = prev->next;
            count = 1;
        }
        else {
            prev = pcur;
            pcur = pcur->next;
            count++;
        }
    }
    return pcur->val;
}