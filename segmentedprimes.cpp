#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long int start;
    cin>>start;
    if(start==1) start=2;
    long int num;
    cin>>num;
    bool a[num];
    a[0]=0;
    for(int i=0;i<=num;i++)
    {
        a[i]=1;
    }
    for(int j=2;j<=sqrt(num);j++)
    {
        if(a[j]==0)
            continue;
        //primes1.push_back(j);
        for(int k=2*j;k<=num;k+=j)
        {
            a[k]=0;
        }
    }

    for(int d=2;d<=sqrt(num);d++)
    {
        for(long int h=(start/d)*d;h<=num;h+=d)
        {
            if(a[h]>=start && a[h]!=0)
                a[h]=0;
        }
    }
    for(long int g=start;g<=num;g++)
    {
        if(a[g]!=0)
            cout<<g<<endl;
    }
    return 0;
}
