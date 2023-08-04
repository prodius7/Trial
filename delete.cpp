#include<bits/stdc++.h>
using namespace std;

int delete(int arr[], int n, int x)
{
	int i;
  for(i=0; i<n; i++){
  	if(arr[i]==x){break;}
  }
  if(i==n){
  	return n;
  }
  for(int j=i; j<n-1; j++){
  	arr[j]=arr[j+1];
  }
}

int main(){
	int arr[]={1,2,3}
	int n= size(arr)/size(arr[0]);
	int x= 5
	int capacity = 5
	int position = 2
}

//likho iska pura code, yeh wala incomplete hai.