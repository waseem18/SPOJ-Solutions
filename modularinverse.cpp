//(n+1)modn^2 = (1-n)


#include<iostream>
using namespace std;

int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return x;
}

int main()
{
    int p,q,r,s;
    cin>>p>>q;
    int t = gcd(p,q,r,s);
    cout<<t<<endl;
    return 0;
}
