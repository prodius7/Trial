//Factorial of a number
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	int count=1;
	for(int i=n; i>=1; --i){
		count = count*i; 
	}
	return count;
}

int main(){
	int c;
	cin>>c;
	cout<< fact(c);
}

//TC = O(n)
//Auxillary Space = O(1)