//Program to check if the binary representation of a number satifies palindrome property


#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[10];
    int b[10];
    long long int n;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    int k=0;
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
        b[k]=a[j];
        k++;
    }
    cout<<endl;
    reverse(a+i,a);
    for(int j=0;j<i;j++)
    {
        cout<<a[j];
    }
    cout<<endl;

    if(equal(b,b+i,a))
        cout<<" Equal"<<endl;
    else
        cout<<"Not equal"<<endl;
    return 0;
}
