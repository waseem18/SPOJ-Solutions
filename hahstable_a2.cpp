#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node*next;
    Node(int d, Node*n)
    {
        data=d;
        next=n;
    }
    friend class Hashtable;
};
class Hashtable
{
public:
    int table_size;
    vector<Node*> *bucket;
    Hashtable(int s)
    {
        table_size = s;
        bucket = new vector<Node*>(table_size);
    }
    void insertt(int);
    void printt();
    int hashh(int);

};

int Hashtable::hashh(int key)
{
    return key%table_size;
}

void Hashtable::insertt(int k)
{
    int index = hashh(k);
    if(bucket->at(index)==NULL)
    {
        bucket->at(index) = new Node(k,NULL);
    }
    else
    {
        Node *p = bucket->at(index);
        while(p!=NULL)
        {
            if(p->next==NULL)
            {
                p->next = new Node(k, NULL);
                break;
            }
            p=p->next;
        }
    }
}

void Hashtable:: printt()
{
    for(int i=0;i<table_size;i++)
    {
        Node *h = bucket->at(i);
        while(h!=NULL)
        {
            cout<<h->data<<endl;
            h=h->next;
        }
    }
}

int main()
{
    int siz;
    cin>>siz;
    int c;
    Hashtable ht(siz);
    for(int i=0;i<3;i++)
    {
        cin>>c;
        ht.insertt(c);
    }
    ht.printt();
    return 0;
}
