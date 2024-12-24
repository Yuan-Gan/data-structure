#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int q[N], h, t;
//入队
void push(int x)
{
	q[++t] = x;
}
//出队
void pop()
{
	h++;
}
//查询队头元素
int front()
{
	return q[h + 1];
}
//查询队尾元素
int back()
{
	return q[t];
}
//判空
bool empty()
{
	return h == t;
}
//元素个数
int size()
{
	return h - t;
}
int main()
{
	//测试
	for (int i = 1; i <= 10; i++)
	{
		push(i);
	}
	while (size())//!empty
	{
		cout << front() << " " << back() << endl;
		pop();
	}
	return 0;
}