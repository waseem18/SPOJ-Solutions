#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int i,p,num;
    cin>>num;
    int n=sqrt(num);
    bool a[num];
    a[0]=false;
    a[1]=false;
    for(int k=2;k<=num;k++)
    {
        a[k]=true;
    }

    for(i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            for(p=i*i;p<=num;p=p+i)
            {
                a[p]=false;
            }
        }
    }

    for(i=2;i<=num;i++)
    {
        if(a[i]==true)
            cout<<i<<endl;
    }

    return 0;
}
