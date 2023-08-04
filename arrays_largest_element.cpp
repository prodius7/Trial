#include<bits/stdc++.h>
using namespace std;
//naive approach
int getLargest(int arr[], int n)
{
   for(int i=0; i<n; i++){
   	bool flag = true;
   	for(int j=0; j<n;j++){
   		if(arr[j]>arr[i]){
   			flag=false;
   			break;
   		}
   	}
   	if(flag==true){
   		return i;
   	}
   }
   return -1;
}

int main(){
	int arr[]={5,10,20, 8};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<getLargest(arr, 4);
	return 0;
}