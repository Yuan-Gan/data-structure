
#include<vector>
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int n, q;
vector<vector<int>>v(N);//����N������
int main()
{
	cin >> n >> q;
	
	while (q--)
	{
		int op, i, j, k;
		cin >> op >> i >> j;
		if (op == 1)
		{
			cin >> k;
			if (v[i].size() <= j)
			{
				 // ����
				 v[i].resize(j + 1);
			 }
			v[i][j] = k;
		}
		else
		{
			cout << v[i][j] << endl;
		}

	}
	return 0;

}
