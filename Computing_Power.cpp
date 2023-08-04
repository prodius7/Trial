#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n){
	long long int result=1;
	for(int i=1; i<=n; ++i){
		result = result*x;
	}
	return result;
}
int main(){
	int x, n;
	cin>>x;
	cin>>n;
	cout<< pow(x, n);

}
