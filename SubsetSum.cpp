//Subset Sum Problem.

#include<bits/stdc++.h>
using namespace std;

int SubsetSum(int arr[], int n, int sum){
	if(n==0){
		return (sum==0)? 1:0;
	}

	return SubsetSum(arr, n-1, sum) + SubsetSum(arr, n-1, sum - arr[n-1]);
}

int main()
{
	int arr[3] = {10 20 15}; 
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum;
	cin>>sum;
	SubsetSum(arr, n, sum);
}