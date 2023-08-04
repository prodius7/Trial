//Using Left Shift Operator.


#include<bits/stdc++.h>
using namespace std;

void kthbit(int n, int k){
	if(n&(1<<(k-1))!=0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
int main(){
	int n, k;
	cin>>n>>k;
	kthbit(n, k);
}