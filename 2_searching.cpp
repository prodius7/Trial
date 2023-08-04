#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
	for(int i=0; i<n; ++i){
		if(arr[i]==x){ return i;}
		
	}
	return -1;
}

int main(){
	int n = 5;
	int arr[n] = {1, 2 ,3 ,4 ,5};
	int x = 5;
	cout<< search(arr, n, x);
}