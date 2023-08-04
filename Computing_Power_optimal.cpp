#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n){
	int res=1;
	while(n>0){
		if(n%2!=0){
			//bit is 1, so we multiply.
			res = res * x;
		}
		x=x*x;
		n=n/2;

	}
	return res;
}
int main(){
	int x, n;
	cin>>x;
	cin>>n;
	cout<< pow(x, n);

}

//T.C - O(logn)
//A.S - O(1)