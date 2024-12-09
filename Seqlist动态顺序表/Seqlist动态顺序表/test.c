#include"Seqlist.h"
void test01()
{
	SeqList sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);
	SeqListPushFront(&sl, 1);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 4);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
}
void test02()
{
	SeqList sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 7);
	SeqListPushBack(&sl, 8);
	SeqListPrint(&sl);
	/*
	int pos = SeqListFind(&sl, 8);
	if (pos != NULL)
		printf("找到了下标是%d\n", pos);
	else
		printf("找不到\n");
	SeqListInsert(&sl, 3, 9);
	SeqListPrint(&sl);*/
	SeqListErase(&sl, 1);
	SeqListPrint(&sl);

}
int main()
{
	//test01();

	test02();
	return 0;
}