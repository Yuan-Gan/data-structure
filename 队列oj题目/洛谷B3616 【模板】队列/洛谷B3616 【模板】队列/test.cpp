#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int q[N], h , t;
int main()
{
	int n; cin >> n;
	while (n--)
	{
		int op; cin >> op;
		if (op == 1)
		{//push
			int x; cin >> x;
			q[++t] = x;
		}
		else if (op == 2)
		{//pop
			if (t - h > 0) h++;
			else cout << "ERR_CANNOT_POP" << endl;
		}
		else if (op == 3)
		{
			if (t - h > 0) cout << q[h + 1] << endl;
			else cout << "ERR_CANNOT_QUERY" << endl;
		}
		else
		{
			cout << t - h << endl;
		}
	}

}
