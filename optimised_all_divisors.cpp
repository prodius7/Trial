//optimised approach
//O(sqrt(n)) T.C
#include<bits/stdc++.h>
using namespace std;

void alldivisors(int n){
	for(int i=1; i< sqrt(n); i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}

	for(int j=sqrt(n); j<=n; j++){
		if(n%j == 0){
			cout<<j<<" ";
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
