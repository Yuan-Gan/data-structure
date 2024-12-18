#include<iostream>
#include<vector>
using namespace std;
//
//struct node
//{
//	int a, b;
//	string s;
//};
//const int N = 10;
//
//void print(vector<int>&a)
//{
//	利用size
//	/*for (int i = 0; i < a.size(); i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;*/
//
//	利用迭代器
//	/*for (auto it = a.begin(); it != a.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;*/
//
//	使用范围for
//	/*for (auto x : a)
//	{
//		cout << x << " ";
//	}
//	cout << endl;*/
//}
//int main()
//{
//	1.创建vector
//	vector<int>a1;//创建变长数组
//	vector<int>a2(N);//创建一个大小为10的变长数组
//	vector<int>a3(N, 2);
//	vector<int>a4 = { 1, 2, 3, 4 ,5 };
//	<>里面可以存放任意的数据类型
//	vector
//	vector<string> a5;
//	vector<vector<int>> a6;
//	vector<node>a7;
//
//	vector<int>a8[N];//创建了一个大小为N的vector数组（二维）
//
//
//	2.size /empty
//	/*print(a2);
//	print(a3);
//	print(a4);
//	if (a1.empty())  cout << "空" << endl;
//	else cout << "不空" << endl;*/
//
//	3.begin /end 迭代器
//	/*print(a2);
//	print(a3);
//	print(a4);*/
//
//	4.push_back/pop_back
//	/*for (int i = 0; i < 5; i++)
//	{
//		a1.push_back(i);
//		print(a1);
//	}
//	while (!a1.empty())
//	{
//		print(a1);
//		a1.pop_back();
//		
//	}*/
//	5.front/back
//	/*cout << a4.front() << endl;
//	cout << a4.back() << endl;*/
//
//	6.resize
//	/*vector<int> aa(5, 1);
//	print(aa);*/
//	扩大成10
//	/*aa.resize(10);
//	print(aa);
//
//	aa.resize(3);
//	print(aa);*/
//
//	7.clear
//	/*cout << aa.size() << endl;
//	aa.clear();
//	cout << aa.size() << endl;*/
//
//
//	return 0;
//} 
