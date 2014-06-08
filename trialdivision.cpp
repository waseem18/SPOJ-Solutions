//Trial Division algorithm to find the factors of a given number.


#include<iostream>
#include<cmath>
using namespace std;
int cntt=0,fcountt=0;
int *calc_primes(int num,int &cnt)
{
    int k=0;
    int *primes=new int[num];
    int n=sqrt(num);
    bool a[num+1];
    a[0]=false;
    a[1]=false;
    for(int i=2;i<num;i++)
    {
        a[i]=true;
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            for(int j=i*i;j<=num;j+=i)
            {
                a[j]=false;
            }
        }
    }
    for(int i=2;i<num;i++)
    {
        if(a[i]==true)
        {
            cnt++;
            primes[k]=i;
            k++;
        }
    }
    return primes;

}

int *trial_factor(int thenum,int &fcount)
{
    int k1=0;
    int *lol = calc_primes((sqrt(thenum)+1),cntt);
    int *prime_factors = new int[thenum];
    for(int p=0;p<cntt;p++)
    {
        if(lol[p]*lol[p] > thenum)
            break;
        while(thenum%lol[p]==0)
        {
            prime_factors[k1]=lol[p];
            k1++;
            fcount++;
            thenum/=lol[p];
        }
        if(thenum>1)
        {
            prime_factors[k1]=thenum;
            fcount++;
        }
    }
    return prime_factors;
}

int main()
{
    int thenumber;
    cin>>thenumber;
    int *factors=trial_factor(thenumber,fcountt);
    for(int j=0;j<fcountt;j++)
    {
        cout<<factors[j]<<endl;
    }
    return 0;
}
