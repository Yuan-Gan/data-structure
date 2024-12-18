#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int N = 1e5 + 10;

int a[N];
int n;

//��ӡ˳���
void print(int a[], int n)
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl << endl;
}
//β��
void push_back(int a[],int &n,int x)
{
	a[++n] = x;
}
//�ȼ��˳����Ƿ���


//ͷ�� O(N)
void push_front(int a[], int n, int x)
{
	for (int i = ++n; i > 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[1] = x;
	
}
//����λ�ò���O(N)
void insert(int p, int x)
{
	for (int i = ++n; i > p; i--)
	{
		a[i] = a[i - 1];
	}
	a[p] = x;
}
//�ж�p��λ���Ƿ�Ϸ�

//ͷɾ
void pop_front()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	
}
//βɾ
void pop_back()
{ 
	n--;
}
//ɾ������һ��
void erase(int p)
{
	for (int i = p; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//��ֵ����
int find(int x)
{
	for (int i = 1; i <= n; i++)
	{
		if (x == a[i])
			return i;
	}
	return -1;
}
//��λ����
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