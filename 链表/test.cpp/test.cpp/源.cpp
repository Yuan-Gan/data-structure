#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

struct Cmp
{
	bool operator()(int x, int y)
	{
		return x > y;
	}

}cmp;
int main()
{
	string s("abxxxxedgo");
	sort(s.begin(), s.end(), cmp);
	for (auto e : s) cout << e << " ";
	cout << endl;
	return 0;
}