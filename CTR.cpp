//Solving congruences
//Chinese remainder theorem

#include<iostream>
using namespace std;

int crt(int m,int n,int &u,int &v)
{
    if(m==0)
    {
        u=0,v=1;
        return n;
    }
    int u1,v1;
    int d = crt(n%m,m,u1,v1);
    u = v1 - (n/m)*u1;
    v = u1;
    return d;
}

int main()
{
    //m,n,a,b;
    int p,q,r,s,u,v;
    cin>>p>>q>>r>>s;
    int gcd = crt(p,q,u,v);
    int result = ((p*u*s)+(q*v*r));
    if(result%(p*q)<0)
        cout<<result<<"="<<p*q+result%(p*q)<<"mod"<<p*q<<endl;
    else
        cout<<result<<"="<<result%(p*q)<<"mod"<<p*q<<endl;
    //cout<<result<<endl;
    return 0;

}
