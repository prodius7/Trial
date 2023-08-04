//Trailing zeroes in a factorial
#include<bits/stdc++.h>
using namespace std;

int trail(int n)
{
	int result=0;
	for(int i=5; i<=n; i=i*5){
		result = result + n/i;
	}
	return result;
}

int main(){
	int c;
	cin>>c;
	cout<< trail(c);
}

//TC = O(logn)
//Also solves the major issue of overflow. As we are not calculating
//or storing factorials. We are just counting number of 5s.