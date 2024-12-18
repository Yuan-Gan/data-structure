#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int N = 1e5 + 10;

int a[N];
int n;

//打印顺序表
void print(int a[], int n)
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl << endl;
}
//尾插
void push_back(int a[],int &n,int x)
{
	a[++n] = x;
}
//先检查顺序表是否满


//头插 O(N)
void push_front(int a[], int n, int x)
{
	for (int i = ++n; i > 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[1] = x;
	
}
//任意位置插入O(N)
void insert(int p, int x)
{
	for (int i = ++n; i > p; i--)
	{
		a[i] = a[i - 1];
	}
	a[p] = x;
}
//判断p的位置是否合法

//头删
void pop_front()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	
}
//尾删
void pop_back()
{ 
	n--;
}
//删除任意一个
void erase(int p)
{
	for (int i = p; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//按值查找
int find(int x)
{
	for (int i = 1; i <= n; i++)
	{
		if (x == a[i])
			return i;
	}
	return -1;
}
//按位查找
int at(int p)
{
	return a[p];
}
int change(int p, int x)
{
	a[p] = x;
}
void clear()
{
	n = 0;
}
int main()
{
	

	
	return 0;
}