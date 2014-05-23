#include <iostream>
using namespace std;

int myreverse(int num)
{
    int rev=0;
    while(num>0)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    return rev;
}

int main()
{
    int tc,a,b;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>a>>b;
        cout<<endl;
        int a1=myreverse(a);
        int a2=myreverse(b);
        cout<<myreverse(a1+a2);
        cout<<endl;
    }
    return 0;
}
