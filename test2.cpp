#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a,b;
	    int i=1;
	    while(b>a){
	    	if(i%2==0){
	    		a=a+2;
	    	}
	    	else if(i%2!=0){
	    		a=a+1;
	    	}
	    	i++;

	    }
	    if(a==b){
	    	cout<<"YES"<<endl;
	    }
	    else if{
	    	cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
