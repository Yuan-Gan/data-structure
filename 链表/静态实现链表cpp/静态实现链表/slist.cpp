#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
//创建
int e[N], ne[N], h, id;
//O(N)
int mp[N];


void insert(int p, int x)
{
	e[++id] = x;
	mp[x] = id;
	ne[id] = ne[p];
	ne[p] = id;
}
void erace(int p)
{
	if (ne[p])
	{
		mp[e[ne[p]]] = 0;
		ne[p] = ne[ne[p]];
	}
}
void print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << "->";
	}
	cout << "NULL" << endl << endl;

}
void push_front(int x)
{
	insert(0, x);
}
//    0       1       2
//    h       id            
//e  哨兵     A       B    
//ne  1       0         
void push_back(int x)
{
	// 先找到链表的尾节点
	int cur = h;
	while (ne[cur])
	{
		cur = ne[cur];
	}
	// 分配新节点索引
	id++;
	e[id] = x;
	// 让原尾节点的next指针指向新节点
	ne[cur] = id;
	// 新节点的next指针置为0，表示链表尾
	ne[id] = 0;
}
//    0       1       2
//    h       id            
//e  哨兵     A       B    
//ne  1       0         
void pop_front()
{
	ne[h] = ne[ne[h]];
}
void pop_back()
{
	int cur = h;
	while (ne[ne[cur]])
	{
		cur = ne[cur];
	}
	ne[cur] = 0;
}
//按值查找
int find(int x)
{
	/*int i = ne[h];
	while (i)
	{
		if (e[i] == x) return i;
		i = ne[i];
	}
	return 0;*/

	return mp[x];
}

void test1()
{
	for (int i = 1; i <= 5; i++)
	{
		push_front(i);
		print();
	}
	erace(2);
	print();
	erace(4);
	print();
}
int main()
{
	test1();
	return 0;
}
