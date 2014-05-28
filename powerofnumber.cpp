#include <iostream>
using namespace std;

long long int modular(int b,int e)
{
    long long int c=1;
    for(int i=1;i<=e;i++)
    {
        c=(c*b);
    }
    return c;
}

int main()
{
    int tc;
    cin>>tc;
    int p,q;
    while(tc--)
    {
        cin>>p>>q;
        long long int k = modular(p,q);
        cout<<k<<endl;

    }
}
