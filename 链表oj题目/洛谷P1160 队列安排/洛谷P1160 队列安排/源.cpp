#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int ne[N], pre[N], h;
bool check[N];
int main()
{
	//�Ƚ� 1 ��ͬѧ���Ž����У���ʱ������ֻ����һ����;
	ne[h] = 1;
	pre[1] = h;
	//���
	int n; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int k, p; cin >> k >> p;
		if (p)//k����β�� k i ne[k]
		{
			ne[i] = ne[k];
			pre[i] = k;
			pre[ne[k]] = i;
			ne[k] = i;
		}
		else//kǰ����  pre  i   k 
		{
			ne[i] = k;
			pre[i] = pre[k];
			ne[pre[k]] = i;
			pre[k] = i;
		}
	}
	//ɾ��
	int m; cin >> m;
	while (m--)
	{
		//ɾ��Ԫ��
		int x; cin >> x;
		if (check[x]) continue;
		//pre x ne
		pre[ne[x]] = pre[x];
		ne[pre[x]] = ne[x];
		check[x] = true;
	}
	//��ӡ
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << i << " ";
	}




	return 0;
}