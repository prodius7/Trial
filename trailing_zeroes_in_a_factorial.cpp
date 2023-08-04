//Trailing zeroes in a factorial
#include<bits/stdc++.h>
using namespace std;

int trail(int n)
{
	long long int count=1;
	for(int i=n; i>=1; --i){
		count = count*i; 
	}
	long long int count2 = 0;
	while(count%10==0){
		count2++;
		count = count/10;
	}
	return count2;
}

int main(){
	int c;
	cin>>c;
	cout<< trail(c);
}

//TC = O(n)
//Not an efficient method because of overflow for even normal values of n.