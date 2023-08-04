//Naive Approach

#include<bits/stdc++.h>
using namespace std;

int CountSet(int n){
	int res=0;
	while(n>0){
		if(n%2!=0){ //n%2!=0 Checks if the last bit is set or not.
         res++;
		}
		n=n/2;     //Removes the last bit.
	}

	return res;	
}
int main(){
	int n;
	cin>>n;
	cout<< CountSet(n);
}