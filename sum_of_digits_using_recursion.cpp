#include<bits/stdc++.h>
using namespace std;
int getsum(int n){
	
	if((n/10)==0){
		return n;
	}
    return getsum(n/10) + n%10;	

}

int main()
{
	int n;
	cin>>n;
	cout<<getsum(n);
}