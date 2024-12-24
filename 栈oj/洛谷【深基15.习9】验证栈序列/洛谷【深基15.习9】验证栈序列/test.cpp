#include<iostream>
#include<stack>
using namespace std;
const int N = 1e5 + 10;
int a1[N], a2[N];
int main()
{
	int q; cin >> q;

	while (q--)
	{
		//����
		int n; cin >> n;
		//��ջ
		for (int i = 1; i <= n; i++) cin >> a1[i];
		//��ջ
		for (int i = 1; i <= n; i++) cin >> a2[i];
		stack <int> st;
		//�Ƚ���һ��
		int j = 1;
		for (int i = 1; i <= n; i++)
		{
			st.push(a1[i]);
			while (j <= n && st.size()&&st.top()==a2[j])
			{
				st.pop();
				j++;
			}
		}
		if (st.empty()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}