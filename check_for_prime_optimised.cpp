//check for prime
//Optimised approach
//O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
if(n==1){
	return false;
}	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
			break;
		}
	}   	
	return true;
}

int main(){
	int a;
	cin>>a;
	cout<< prime(a);
}