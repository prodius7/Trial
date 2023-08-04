#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int x, int capacity, int position){
	if(capacity==n){return n;} //Cannot insert if the array is full.
    
    int idx = position-1;
    for(int i=n-1; i>=idx; i--){
    	arr[i+1] = arr[i]; //Shifting each element one index above.
    }

    arr[idx] = x;
    return (n+1); //Returns new size of the array.
}

int main(){
	//int n = 5;
	int arr[] = {1, 2 ,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 5;
	int position = 1;
	int capacity = 5;
	cout<< insert(arr, n, x, capacity, position);
}