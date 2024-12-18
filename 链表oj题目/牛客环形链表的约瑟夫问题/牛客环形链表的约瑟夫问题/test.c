/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int����
 * @param m int����
 * @return int����
 */
typedef struct ListNode ListNode;
//�������
ListNode* buy_node(int x)
{
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
    newnode->val = x;
    newnode->next = NULL;
    return newnode;
}
//������������
ListNode* create_circle(int n)
{
    //ͷ�ڵ�
    ListNode* phead = buy_node(1);
    ListNode* ptail = phead;
    for (int i = 2; i <= n; i++)
    {
        //β��
        ListNode* newnode = buy_node(i);
        ptail->next = newnode;
        ptail = ptail->next;
    }
    ptail->next = phead;
    return ptail;
}
int ysf(int n, int m)
{
    //1.�ȴ���n��Ԫ�صĻ�
    ListNode* prev = create_circle(n);
    ListNode* pcur = prev->next;
    int count = 1;
    while (pcur->next != pcur)
    {
        if (count == m)
        {
            //ɾ��
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