//Factorial of a number using recursion
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main(){
	int c;
	cin>>c;
	cout<< fact(c);
}

//TC = O(n+1) = O(n)
//Auxillary Space = O(n+1) = O(n).