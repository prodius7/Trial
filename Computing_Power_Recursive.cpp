#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n){
	int temp;
	if(n==0){
		return 1;
	}
	temp = pow(x, n/2);
	temp= temp*temp;
	if(n%2==0){
		return temp;
	}
	else{
		return temp*x;
	}
}
int main(){
	int x, n;
	cin>>x;
	cin>>n;
	cout<< pow(x, n);

}
