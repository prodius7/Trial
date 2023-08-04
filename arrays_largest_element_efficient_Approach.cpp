#include<bits/stdc++.h>
using namespace std;

//Efficient approach

int getLargest(int arr[], int n)
{
   int res=0;
   for(int i=0; i<n; i++){
   	if(arr[i]>arr[res]){
   		res=i;
   	}
   }
   return res;
}

int main(){
	int arr[]={5,10,20, 90};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<getLargest(arr, 4);
	return 0;
}