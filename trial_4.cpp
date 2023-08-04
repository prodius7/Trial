#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n, c;
		cin>>n>>c;

		vector<long long> v(n);

		for(long long int i=0; i<n; i++){
			long long s;
			cin>>s;
			v.push_back(s);
		}

      long long left = 1, right = c;
      long long mid = left + (right-left)/2;
		while(left<=right){
			long long sum = 0;
			for(long long int j=0; j<n; j++){
				sum += ((v[j]+mid)*(v[j]+mid));
				if(sum==c)
					 cout<< mid/2 <<endl;
			   else if(sum >c)
			   	 right--;
			   else
			   	left ++;
			}
		}
	}
}