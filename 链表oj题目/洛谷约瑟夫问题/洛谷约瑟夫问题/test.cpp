#include<iostream>

using namespace std;
const int N = 110;
int ne[N];

int main()
{
	int n, m; cin >> n >> m;
	//����ѭ������
	for (int i = 1; i <= n; i++) ne[i] = i + 1;
	ne[n] = 1;
	//ʵ��
	//��̭n����
	int t = n;
	for (int i = 1; i <= n; i++)
	{
		//�ƶ�m-1��
		for (int j = 1; j < m; j++)
		{
			t = ne[t];
		}
		cout << ne[t] << " ";
		//ɾ��t��Ԫ��
		ne[t] = ne[ne[t]];
	}
	return 0;
}