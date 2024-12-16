#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;

ListNode* ListUnit();
//Î²²å
void ListPushBack(ListNode* phead, LTDataType x);
//Í·²å
void ListPushFront(ListNode* phead, LTDataType x);

void ListPrint(ListNode* phead);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

