#include"List.h"

ListNode* BuyNode(int x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		newnode->prev = NULL;
		return newnode;
	}
}


ListNode* ListUnit()
{
	ListNode* newnode = BuyNode(0);
	newnode->next = newnode;
	newnode->prev = newnode;
	return newnode;
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail= BuyNode(x);
	//将原来的尾节点与新的尾结点的前后指针互相指向
	phead->prev->next = tail;
	tail->prev = phead->prev;
	//将哨兵位与尾结点的前后指针互相指向
	tail->next = phead;
	phead->prev = tail;
}
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n"); 
}
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* first = phead->next;
	ListNode* newnode = BuyNode(x);
	phead->next = newnode;
	newnode->next = first;
	newnode->prev = first->prev;
	first->prev = newnode;
}
void ListPopBack(ListNode* phead)
{
	assert(phead||phead !=phead->next);
	ListNode* del = phead->prev;
	ListNode* tail = del->prev;
	tail->next = phead;
	phead->prev = tail;
	free(del);

}
void ListPopFront(ListNode* phead)
{
	assert(phead || phead != phead->next);
	ListNode* del = phead->next;
	ListNode* first = del->next;
	phead->next = first;
	first->prev = phead; 
	free(del);
	

}