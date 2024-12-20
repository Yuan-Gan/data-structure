#include<iostream>
#include<stack>
#include<vector>
using namespace std;
typedef unsigned long long int ll;
const int N = 1e6 + 10;
ll stk[N];
int top;
int main()
{
	int T; cin >> T;
	while (T--)
	{
		int n; cin >> n;
		top = 0;
		while (n--)
		{
			string op; cin >> op;
			if (op == "push")
			{
				ll x; cin >> x;
				//push²Ù×÷
				stk[++top] = x;
			}
			else if (op == "pop")
			{
				if (top == 0) cout << "Empty" << endl;
				else top--;
			}
			else if (op == "query")
			{
				if (top == 0) cout << "Anguei!" << endl;
				else cout << stk[top] << endl;
			}
			else cout << top << endl;

		}
	}

	return 0;
}