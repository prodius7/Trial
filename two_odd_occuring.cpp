//Best Approach
#include<bits/stdc++.h>
using namespace std;

void TwoOdd(int arr[], int n){
	int res1 = 0; int res2= 0; int XOR = 0;
	for(int i=0; i<n; ++i){
		XOR = (XOR^arr[i]);
	}
	int rightmost_set_bit = (XOR & ~(XOR-1)); //Gives the Rightmost set bit
	for(int i=0; i<n; ++i){
        if((arr[i] & rightmost_set_bit != 0)){
        	res1 = (res1^arr[i]);
        }
        else{
        	res2 = (res2 ^ arr[i]);
        }
	}
	cout<<res1<<" "<<res2;
}

int main(){
	int arr[] = {3,4,3,4,5,4,4,6,7,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	TwoOdd(arr, n);
	

}