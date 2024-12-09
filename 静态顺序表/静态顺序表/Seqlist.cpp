#include<iostream>
using namespace std;
const int N = 1e5 + 10;

int a[N];//一个足够大的数组

int n;//数组的元素个数

void print()
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void push_back(int d)
{
	a[n] = d;
	n++;
}
void push_front(int d)
{
	for (int i = n; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = d;
	n++;
}
void pop_front()
{
	for (int i = 0; i < n; i++)
		a[i] = a[i + 1];
	n--;
}
void pop_back()
{
	n--;
}
int find(int d)
{
	for (int i = 0; i < n; i++)
		if (a[i] == d)
			return i;
	return -1;
}
void erase(int pos)
{
	for (int i = pos; i < n; i++)
		a[i] = a[i + 1];
	n--;
}
void insert(int pos ,int d)
{
	for (int i = n; i > pos; i--)
		a[i] = a[i - 1];
	a[pos] = d;
	n++;
}
void test01()
{
	push_back(4);
	push_back(3);
	push_back(9);
	push_back(7);
	push_back(2);
	push_back(0);

	print();
	
	erase(3);
	print();

	insert(2,9);
	print();

	insert(4, 5);
	print();

}
int main()
{
	test01();
	return 0;
}