//Print all the prime numbers smaller than or equal to n.
//Optimised Sieve- Shortest Code.

#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
vector<bool> isprime(n+1, true); /*Declare a boolean array of size n+1(from 0 to n)
                                   and initialising it to true for all indexes*/
for(int i=2; i<=n; i++){
	if(isprime[i]){
		cout<<i<<" ";
		for(int j=i*i; j<=n; j=j+i){
			isprime[j]=false;
		}
	}
}
}

int main()
{
	int n;
	cin>>n;
	sieve(n); //Calls sieve function.
	return 0;
}
 
//T.C- O(nloglogn)
//T.C OF NAIVE SIEVE - O(nsqrt(n))