#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5 + 10;
vector<vector<int>>vv(N);
int main()
{
	int n, q;
	cin >> n >> q;
	while (q--)
	{
		int op, i, j, k;
		cin >> op >> i >> j;
		if (op == 1)
		{
			cin >> k;
			if (vv[i].size() < j)
			{
				vv[i].resize(j + 1);
			}		
			vv[i][j] = k;
		}
		else
		{
			cout << vv[i][j] << endl;
		}
	}
	return 0;
}