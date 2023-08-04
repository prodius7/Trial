#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long int result = 0;
		long long int power2 = 1; //which is equal to 2^0.
		for(int i=s.size()-1; i>=0; --i){
			result = result + (s[i]-'0')* power2;
			power2 = power2 *2; //essentially translates to raising the power of 2 each time.

		}
		cout<<result<<endl;
	}
}