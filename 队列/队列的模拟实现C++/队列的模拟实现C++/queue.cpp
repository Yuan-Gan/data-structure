#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int q[N], h, t;
//���
void push(int x)
{
	q[++t] = x;
}
//����
void pop()
{
	h++;
}
//��ѯ��ͷԪ��
int front()
{
	return q[h + 1];
}
//��ѯ��βԪ��
int back()
{
	return q[t];
}
//�п�
bool empty()
{
	return h == t;
}
//Ԫ�ظ���
int size()
{
	return h - t;
}
int main()
{
	//����
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