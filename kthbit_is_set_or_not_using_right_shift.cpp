//Using Right Shift Operator.


#include<bits/stdc++.h>
using namespace std;

void kthbit(int n, int k){
	if(n>>(k-1)& 1 == 1){
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