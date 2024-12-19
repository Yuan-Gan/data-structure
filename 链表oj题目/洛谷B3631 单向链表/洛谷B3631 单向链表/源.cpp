#include<iostream>
using namespace std;
const int N = 1e5 + 10, M = 1e6 + 10;

int h, id, e[N], ne[N];
int mp[M];
int main()
{
	//初始化
	id++;
	e[id] = 1;
	mp[1] = id;
	//执行q次
	int q;
	cin >> q;
	while (q--)
	{
		int op, x, y;
		//选择
		cin >> op >> x;
		//先找到x的下标
		int p = mp[x];
		if (op == 1)
		{
			cin >> y;
			//在x后插入y

			//先处理y
			id++;
			e[id] = y;
			ne[id] = ne[p];
			//处理x
			ne[p] = id;
			//存储y的下标
			mp[y] = id;
		}
		 else if(op == 2)
            cout << e[ne[p]]<< endl;
		//删除x后
		else ne[p] = ne[ne[p]];
	}

	return 0;
}