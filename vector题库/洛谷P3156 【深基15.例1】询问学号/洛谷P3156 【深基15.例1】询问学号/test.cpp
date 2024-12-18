#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int n, m;

int main()
{
	cin >> n >> m;
	
	vector<int>a(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	int i;
	while (m--)
	{
		cin >> i;
		cout << a[i] << endl;
	}

	return 0;
}