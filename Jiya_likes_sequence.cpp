#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin>>a[i];
	}
	long long int product =1;
	for(int j=0; j<n; ++j){
		product = product * a[j];
		
	}
	if(product%10== 2 || product%10==3 || product%10==5){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}


}
}