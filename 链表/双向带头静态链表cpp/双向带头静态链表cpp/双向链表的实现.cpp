#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int e[N], ne[N], pre[N], id, h;
int mp[N];

void push_front(int x)
{
	e[++id] = x;
	mp[x] = id;
	ne[id] =ne[h];
	pre[id] = h;

	pre[ne[h]] = id;

	ne[h] = id;
}
void print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << "->";
	}
	cout << endl << endl;
}
//°´Öµ²éÕÒ
int find(int x)
{
	return mp[x];
}
void insert_back(int p, int x)
{
	e[++id] = x;
	mp[x] = id; 
	ne[id] = ne[p];
	pre[id] = p;

	pre[ne[p]] = id;

	ne[p] = id;
}
void insert_front(int p, int x)
{
	e[++id] = x;
	mp[x] = id;

	pre[id] = pre[p];
	ne[id] = p;

	ne[pre[p]] = id;
	pre[p] = id;
	
}
void erace(int p)
{
	mp[e[p]] = 0;
	ne[pre[p]] = ne[p];
	pre[ne[p]] = pre[p];
}
void test1()
{
	for (int i = 1; i <= 5; i++)
	{
		push_front(i);
		print();
	}
	erace(3);
	print();
}
int main()
{
	test1();

	return 0;
}