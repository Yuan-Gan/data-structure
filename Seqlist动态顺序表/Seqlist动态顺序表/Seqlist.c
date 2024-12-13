#include"Seqlist.h"
void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPrint(SeqList *ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqlistCheckCapacity(SeqList* ps)
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SeqList* tmp = (SeqList*)realloc(ps->a, newcapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqlistCheckCapacity(ps);
	ps->a[ps->size++] = x;
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqlistCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (int i = 0 ; i < ps->size ; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void SeqListPopBack(SeqList* ps)
{
	assert(ps && ps->size);//顺序表不能为空
	ps->size--;

}
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return NULL;
}
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SeqlistCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps && ps->size);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void SeqListDestroy(SeqList* ps)
{
	if (ps->a)
		free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
