//Naive approach
#include<bits/stdc++.h>
using namespace std;

void alldivisors(int n){
	for(int i=1; i<=n; i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;
	alldivisors(n);
	return 0;
}
