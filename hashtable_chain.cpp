//Hashtable algorithm in C++ using chaining - Linked lists
#include<iostream>
#include<cmath>
<<<<<<< HEAD
#include<vector>
#include<algorithm>
using namespace std;
=======
#include<algorithm>

using namsepace std;
>>>>>>> 5ec3977d74c5bc4ca78ea976c6034f67b5826cf4

class Node
{
public:
	int data;
	Node *next;
	Node *prev;
	Node(int p,int d,int n)
	{
		prev = p;
		data = d;
		next = n;
	}
	friend class Hashtable;
};

class Hashtable
{
	//Creating a vector of pointers of given input size
	int table_size;
	vector<Node*> *bucket;
	Hashtable(int s)
	{
		table_size = s;
		bucket = new vector<Node*>(table_size);
	}

	int hashh(int k)
	{
		return k%table_size;
	}

	void insertt(int keyy)
	{
		int index = hashh(keyy);
		if(bucket->at(index)==NULL)
		{
			bucket->at(index) = new Node(NULL,keyy, NULL);
		}
		else
		{
			Node *p = bucket->at(index);
			while(p!=NULL)
			{
				if(p->next==NULL)
				{
					p->next = new Node(p,keyy, NULL);
				}
				else
					p = p->next;
			}
		}

	}

	void removee(int ke)
	{
		for(int i=0;i<table_size;i++)
		{
			Node *q = bucket->at(i);
			if(q==NULL)
				return;
			else
			{
				while(q->data!=ke)
				{
					q=q->next;
				}
				Node *temp = q->prev;
				q->prev = q->next;
				q->next = temp;
				delete q;
			}

		}
	}

	void printt()
	{
		for(int i=0;i<table_size;i++)
		{
			Node *q = bucket.at(i);
			if(q==NULL)
				continue;
			while(q->next!=NULL)
			{
				cout<<q->data;
			}

		}
	}

};

int main()
{
	Hashtable ht(8);
	ht.insertt(36);
	ht.insertt(72);
	ht.insertt(18);
	ht.insertt(43);
	ht.insertt(6);
	ht.insertt(10);
	ht.insertt(5);
	ht.insertt(15);
	ht.printt();
	return 0;

}
