#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void PrintfList(Node* cur)
{
	while (cur != NULL)
	{
		cout << cur->data <<"-->";
		cur = cur->next;
	}
	cout << "NULL" << endl;
}
Node* CreatNode(int d)
{
	Node*p = new(Node);
	p->data = d;
	p->next = NULL;
	return p;
}
void PushFront(Node*&ph,int d)
{
	Node* pn = CreatNode(d);
	pn->next = ph;
	ph = pn;
}
void PushBack(Node*& ph, int d)
{
	
	Node* pn = CreatNode(d);
	if (ph == NULL)//ø’¡¥±Ì
	{
		ph = pn;
	}
	else//∑«ø’¡¥±Ì
	{
		Node* tail = ph;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = pn;
	}
	
}
void PopFront(Node*& ph)
{
	if (ph == NULL)
	{
		cout << "ƒ„…æ∆®" << endl;
		exit(-1);
	}
	else
	{
		Node* del = ph;
		ph = ph->next;
		delete del;
		del = nullptr;
	}
}
void PopBack(Node*& ph)
{
	if (ph == NULL)
	{
		cout << "ƒ„…æ∆®" << endl;
		exit(-1);
	}
	else
	{
		if (ph->next = NULL)
		{
			delete ph;
		}
		else
		{
			Node* tail = ph;
			while (tail->next->next != NULL)
			{
				tail = tail->next;
			}

			delete tail->next;
			tail->next = NULL;
		}
		
	}
	

}
void DestoryList(Node*& ph)
{

	while (ph != NULL)
	{
		PopFront(ph);
	}
	
}
int main()
{
	Node* phead = NULL;//ø’¡¥±Ì
	
	PushBack(phead, 1);
	PushBack(phead, 2);
	PushBack(phead, 3);
	PushBack(phead, 4);
	PrintfList(phead);

	
	DestoryList(phead);
	PrintfList(phead);
}















