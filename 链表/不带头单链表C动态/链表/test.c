#include"slist.h"

void test1()
{
	SListNode* plist = BuySListNode(1);
	SListPrint(plist);
}
void test2()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
}

void test3()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListNode* pos = SListFind(plist, 1);
	/*if (pos == NULL)
		printf("找不到\n");
	else
		printf("找到了p=%p", pos);*/
	SListErase(&plist, pos);
	SListPrint(plist);
}
void test()
{
	SListNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPrint(plist);
	SListPushFront(&plist, 2);
	SListPrint(plist);
	SListPushFront(&plist, 3);
	SListPrint(plist);
	SListPushFront(&plist, 4);
	SListPrint(plist);

}
int main()
{
	//test1();
	//test2();
	/*test3();*/
	test();
	return 0;
}