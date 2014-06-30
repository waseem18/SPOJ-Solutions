//Extended Euclidean Algorithm-- Used in finding the integer solutions of a
//Linear diophantine equation and the modular inverse.
//Modular inverse of 'ax=1 mod m' is the value of 'x' = a^-1.
//gcd(a,m) should be equal to 1.

//https://www.cs.cmu.edu/~adamchik/21-127/lectures/divisibility_5_print.pdf



#include<iostream>
#include<cmath>
using namespace std;

int eea(int a,int b,int c,int &x,int &y)
{
    if(a==0)
    {
        x=0,y=1;
        return b;
    }
    int x1,y1,c1;
    int d = eea(b%a,a,c1,x1,y1);
    x = y1 - (b/a)*x1;
    y = x1;
    return d;
}

int main()
{
    int x,y,c=40;
    int p = eea(56,72,c,x,y);
    int x0 = (x*c)/p;
    int y0 = (y*c)/p;
    cout<<x0<<"  "<<y0<<endl;
    return 0;
}

