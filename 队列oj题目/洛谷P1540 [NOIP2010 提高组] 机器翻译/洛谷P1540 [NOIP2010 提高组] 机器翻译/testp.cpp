#include<iostream>
#include<queue>
using namespace std;
const int N = 1e5 + 10;
bool st[N];
int main()
{
	int ans = 0;
	queue<int>q;
	int m, n; cin >> m >> n;
	while (n--)
	{
		int input;
		cin >> input;
		if (st[input]) continue;
		st[input] = true;
		ans++;
		q.push(input);
		if (q.size() > m)
		{
			st[q.front()] = false;
			q.pop();
		}
	}
	cout << ans << endl;
	return 0;
}
