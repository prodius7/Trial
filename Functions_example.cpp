#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n){
	int digit_sum = 0;
	while(n){
		digit_sum = digit_sum + n%10;
		n=n/10;
	}
	return digit_sum;
}

int main(){
	int m,n;
	cin>>m>>n;
	
	cout<<digit_sum(m)+digit_sum(n);

}

