#include<iostream>
#include<queue>
using namespace std;
typedef pair<int, int> PII;
queue<PII> q;//时间和国家
const int N = 1e5 + 10;
int cnt[N], kinds;
int n;
int main()
{
	cin >> n;
	while (n--)
	{
		int t, k; cin >> t >> k;
		while (k--)
		{
			int x; cin >> x;
			q.push({ t, x });
			if (cnt[x]++ == 0) kinds++;
		}
		while (q.size() && q.back().first - q.front().first >= 86400)
		{
			PII tmp = q.front(); q.pop();
			int x = tmp.second;
			if (cnt[x]-- == 1) kinds--;
		}
		cout << kinds << endl;

	}
	return 0;
}

