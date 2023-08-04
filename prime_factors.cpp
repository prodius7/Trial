//Prime factors
#include<bits/stdc++.h>
using namespace std;

bool ifprime(int n){
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

void prime_factors(int n){
for(int i=2; i<n; ++i){
	if(ifprime(i)==1){
        int x=i;
        while(n%x==0){
            cout<< i << " ";
            x=x*i; //to check for higher powers of i.
        }
	}
}
}


int main(){
	int a;
	cin>>a;
    prime_factors(a);
}