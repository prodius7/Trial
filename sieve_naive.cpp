//Print all the prime numbers smaller than or equal to n.
//Naive approach
#include<bits/stdc++.h>
using namespace std;

//Writing the function to check if a number is prime or not first.
bool isprime(int n){ //Time complexity of this function is O(sqrt(n)).
if(n==1){
	return false;
}	
if(n==2 || n==3){
	return true;
}
if(n%2==0 || n%3==0){
	return false;
}
	for(int i=5; i<=sqrt(n); i=i+6){ //coz if n%2==0 then n%4==0, no need to check for i=4.
		if(n%i==0 || n%(i+2)==0){
			return false;
			break;
		}
	}   	
	return true;
}
	
//Writing the function to find prime numbers from 1 to n.
void sieve(int n){
	for(int i=2; i<=n; i++){
		if(isprime(i)){ //CHecks if i is prime or not.
			cout<<i<<" ";
		}
	}
}


int main()
{
	int n;
	cin>>n;
	sieve(n);//Calls sieve function.
	return 0;
}
 

//Time Complexity- O(n*sqrt(n))