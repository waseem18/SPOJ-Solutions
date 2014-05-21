#include <iostream>
#include <vector>
using namespace std;

//Finding prime nuners using Sieve of Eratosthenes
vector<int>spojprime(int l,int h)
{
    vector<int>primes;
    for(int i=l;i<=h;i++)
    {
        primes.push_back(i);
    }
    //removing multiples of each element
    for(unsigned int i = 0; i < primes.size(); i++)
    {
    	//get the value
    	int v = primes[i];

    	if (v!=0) {
    		//remove all multiples of the value
    		unsigned int x = i+v;
    		while(x < primes.size()) {
    			primes[x]=0;
    			x = x+v;
    		}
    	}
    }
    return primes;
}

int main()
{
    int testcases;
    cin>>testcases;
    int low,high;
    vector<int> primes;
    for(int k=0;k<testcases;k++)
    {
        cin>>low>>high;
        if(low==1)
            low=2;
        primes = spojprime(low,high);

    }

    //vector<int> primes = spojprime(low,high);
    for(unsigned int j=0;j<primes.size();j++)
    {
        if(primes[j]!=0)
            cout<<primes[j]<<endl;
    }
    cout<<endl;
    cout<<endl;
    return 0;
}
