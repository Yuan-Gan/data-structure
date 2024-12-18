#include"slist.h"
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPrint(SListNode* plist)
{
	while (plist)
	{
		printf("%d-->", plist->data);
		plist = plist->next;
	}
	printf("NULL\n");
}
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{ 
		*pplist = newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
	return 0;
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* head = *pplist;
	newnode->next = head;
	head = newnode;
	*pplist = newnode;
}

void SListPopFront(SListNode** pplist)
{
	assert(pplist && *pplist);
	SListNode* head = *pplist;
	head = head->next;
	free(*pplist);
	*pplist = head;
}

void SListPopBack(SListNode** pplist)
{
	assert(pplist && *pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		//prev  tail
		SListNode* tail = *pplist;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;



	}
	
}
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* head = plist;
	while (head)
	{

		if (head->data == x)
		{
			return head;
		}
		head = head->next;
	}
	return NULL;
}
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	//pos n pos->next
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListEraseAfter(SListNode* pos)
{
	//pos de  pos->next->next
	SListNode* delet = pos->next;
	pos->next = pos->next->next;
	free(delet);
	delet = NULL;
}
void SListInsert(SListNode** pphead, SListNode* pos, SLTDateType x)
{
	assert(pphead && pos);
	if (pos == *pphead)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		//prev  new  pos
		SListNode* newnode = BuySListNode(x);
		SListNode* prev = *pphead;

		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = newnode;
		newnode->next = pos;


	}

}
void SListErase(SListNode** pphead, SListNode* pos)
{
	assert(pphead && pos);
	if (pos == *pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		//prev pos
		SListNode* prev = *pphead;
		
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = prev->next->next;
		free(pos);
		pos = NULL;
	}
	
}
void SListDestroy(SListNode** pphead)
{
	assert(pphead);
	SListNode* pcur = *pphead;
	while (pcur)
	{
		SListNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}