#include<iostream>
using namespace std;
const int N = 1e5 + 10, M = 1e6 + 10;

int h, id, e[N], ne[N];
int mp[M];
int main()
{
	//��ʼ��
	id++;
	e[id] = 1;
	mp[1] = id;
	//ִ��q��
	int q;
	cin >> q;
	while (q--)
	{
		int op, x, y;
		//ѡ��
		cin >> op >> x;
		//���ҵ�x���±�
		int p = mp[x];
		if (op == 1)
		{
			cin >> y;
			//��x�����y

			//�ȴ���y
			id++;
			e[id] = y;
			ne[id] = ne[p];
			//����x
			ne[p] = id;
			//�洢y���±�
			mp[y] = id;
		}
		 else if(op == 2)
            cout << e[ne[p]]<< endl;
		//ɾ��x��
		else ne[p] = ne[ne[p]];
	}

	return 0;
}