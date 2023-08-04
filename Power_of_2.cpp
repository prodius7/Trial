#include<bits/stdc++.h>
using namespace std;

bool ispow2(int n){

	return ((n!=0) && ((n&(n-1))==0));
}

int main(){
	int n;
	cin>>n;
	cout<< ispow2(n);

}