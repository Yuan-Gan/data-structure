#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1e5 + 10;

int n;
vector<int> edges[N];
bool st[N];

void dfp(int x)
{
	cout << x << " ";
	st[x] = true;
	for (auto e : edges[x])
	{
		if (!st[e])
		{
			dfp(e);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int x, y; cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	dfp(1);
	return 0;
}

