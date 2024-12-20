#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int ne[N], pre[N], h;
bool check[N];
int main()
{
	//先将 1 号同学安排进队列，这时队列中只有他一个人;
	ne[h] = 1;
	pre[1] = h;
	//入队
	int n; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int k, p; cin >> k >> p;
		if (p)//k后面尾插 k i ne[k]
		{
			ne[i] = ne[k];
			pre[i] = k;
			pre[ne[k]] = i;
			ne[k] = i;
		}
		else//k前插入  pre  i   k 
		{
			ne[i] = k;
			pre[i] = pre[k];
			ne[pre[k]] = i;
			pre[k] = i;
		}
	}
	//删除
	int m; cin >> m;
	while (m--)
	{
		//删除元素
		int x; cin >> x;
		if (check[x]) continue;
		//pre x ne
		pre[ne[x]] = pre[x];
		ne[pre[x]] = ne[x];
		check[x] = true;
	}
	//打印
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << i << " ";
	}




	return 0;
}