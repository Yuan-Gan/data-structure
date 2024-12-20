#include<iostream>

using namespace std;
const int N = 110;
int ne[N];

int main()
{
	int n, m; cin >> n >> m;
	//创建循环链表
	for (int i = 1; i <= n; i++) ne[i] = i + 1;
	ne[n] = 1;
	//实现
	//淘汰n个人
	int t = n;
	for (int i = 1; i <= n; i++)
	{
		//移动m-1次
		for (int j = 1; j < m; j++)
		{
			t = ne[t];
		}
		cout << ne[t] << " ";
		//删除t后元素
		ne[t] = ne[ne[t]];
	}
	return 0;
}