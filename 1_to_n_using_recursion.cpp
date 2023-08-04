
#include<bits/stdc++.h>
using namespace std;

void fun1toN(int n){
	if(n==0){ 
		return; 
	}
	
	fun1toN(n-1);
	cout<<n<<" ";
	
}

int main(){
	  
	 int n;
	 cin>>n;
	 fun1toN(n);

}
