//Best Approach
#include<bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n){
	int result = 0;
	for(int i=0; i<n; ++i){
		result = (result^arr[i]);
	}
	return result;
}

int main(){
	int arr[] = {4,3,4,4,4,5,5,3,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<< findOdd(arr, n);
	

}