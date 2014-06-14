#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node *prev;
	Node(Node* p,int d,Node* n)
	{
		prev = p;
		data = d;
		next = n;
	}
	friend class Hashtable;
};

class Hashtable
{
public:

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

	void printt()
	{
		for(int i=0;i<table_size;i++)
		{
			Node *q = bucket->at(i);
			if(q==NULL)
				continue;
			while(q!=NULL)
			{
				cout<<q->data;
				q=q->next;

			}

		}
	}

};

int main()
{
	int arg1,arg2;
	cout<<"Enter the size:"<<endl;
	cin>>arg1;
	Hashtable ht(arg1);
	for(int i=0;i<arg1;i++)
    {
        cin>>arg2;
        ht.insertt(arg2);
    }
    ht.printt();
    return 0;

}
