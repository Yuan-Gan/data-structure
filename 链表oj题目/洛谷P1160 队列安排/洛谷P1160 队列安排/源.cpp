#include<iostream>
using namespace std;

const int N = 1e5 + 10;
int h;
int ne[N], pre[N];
bool st[N];
 
int main()
{
	//³õÊ¼»¯
	pre[1] = h;
	ne[h] = 1;
	int n; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int k, p;
		cin >> k >> p;
		if (p)
		{
			//²åÓÒ±ß
			pre[i] = k;
			ne[i] = ne[k];
			pre[ne[k]] = i;
			ne[k] = i;
		}
		else//²å×ó±ß
		{
			ne[i] = k;
			pre[i] = pre[k];

			ne[pre[k]] = i;
			pre[k] = i;
		}
	}
	int m; cin >> m;
	while (m--)
	{
		int x; cin >> x;
		if (st[x]) continue;

		ne[pre[x]] = ne[x];
		pre[ne[x]] = pre[x];
		st[x] = true;
	}
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << i << " ";
	}



}