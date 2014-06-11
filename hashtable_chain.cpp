//Hashtable algorithm in C++ using chaining - Linked lists
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namsepace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }
    friend class Hashtable;
};

class Hashtable
{
public:
    int siz;
    vector<Node*> *bucket;
    Hashtable(int s)
    {
        siz=s;
        bucket = new vector<Node*>(siz);
    }
    void insertt(int);
    void removee();
    int getsize(int);
    int hashh(int);
    void print(int);
};
//Inserting an Element
void Hashtable::insertt(int a)
{
    int index = hashh(data);
    if(bucket->at(index)==NULL)
    {
        bucket->at(index) = new Node(data,NULL);
        return;
    }
    Node *p = bucket->at(hashh(data));
    while(p!=NULL)
    {
        if(p->next==NULL)
        {
            p->next = new Node(data, NULL);
            break;
        }
        p = p->next;
    }
}

void printt(int start)
{
    int linecount=0;
    for(int i=start;i<bucket->size();i++)
    {
        cout<<i<<endl;
        Node *p = bucket->at(i);
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
        cout<<endl;
    }
}
