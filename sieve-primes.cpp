#include <vector>
#include <iostream>

using namespace std;

//finds prime numbers using Sieve of Eratosthenes algorithm
vector<int> calc_primes(const int max);

int main()
{
    const int max = 100;

    vector<int> primes = calc_primes(max);

    for(unsigned int i = 0; i < primes.size(); i++)
    {
    	if(primes[i] != 0)
    		cout<<primes[i]<<endl;
    }

    return 0;
}

vector<int> calc_primes(const int max)
{
    vector<int> primes;

    // fill vector with candidates
    for(int i = 2; i < max; i++)
    {
    	primes.push_back(i);
    }

    // for each value in the vector...
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
