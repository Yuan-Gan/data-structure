#include<iostream>
using namespace std;
const int N = 1e5 + 10;

int h[N];
int e[N * 2], ne[N * 2], id;

bool st[N];

void add(int x, int y)
{
	e[++id] = y;
	ne[id] = h[x];
	h[x] = id;
}
void dfs(int u)
{
	cout << u << " ";
	st[u] = true;
	for (int i = h[u]; i; i = ne[i])
	{
		int v = e[i];
		if (!st[v])
		{
			dfs(v);
		}
	}
}
int main()
{
	int n; cin >> n;
	for (int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		add(a, b); add(b, a);
	}
	dfs(1);
	return 0;
}
