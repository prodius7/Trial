//Lookup Table Method

#include<bits/stdc++.h>
using namespace std;

int table[256];
void initialize(){

table[0]=0;
for(int i=1; i<256; i++){
	table[i] = (i&1) + table[i/2]; //From the naive approach method.
  }

}

int CountSet(int n){
	
	int res = table[(n & 0xff)];
	n = n>>8;
	res = res + table[(n & 0xff)];
	n = n>>8;
	res = res + table[(n & 0xff)];
	n = n>>8;
	res = res + table[(n & 0xff)];

	return res;
	
}

int main(){
	int n;
	cin>>n;
	cout<< CountSet(n);
}