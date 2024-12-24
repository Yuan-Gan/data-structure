#include<iostream>
#include<stack>
#include <cctype>
using namespace std;
int main()
{
	stack<int> st;
	char ch;
	int num = 0;
	while (cin >> ch)
	{
		if (ch == '@') break;
		else if (isdigit(ch)) num = 10 * num + ch - '0';
		else if (ch == '.')
		{
			st.push(num);
			num = 0;
		}
		else
		{
			int b = st.top(); st.pop();
			int a = st.top(); st.pop();
			if (ch == '+') st.push(a + b);
			else if (ch == '-') st.push(a - b);
			else if (ch == '*') st.push(a * b);
			else st.push(a / b);
		}
	}
	cout << st.top() << endl;
	


}