#include<bits/stdc++.h>
using namespace std;

//Efficient Approach

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

int secondLargest(int arr[], int n){
	int res=-1; int largest =0;   // res---> for 2nd largest element.
	for(int i=0; i<n; i++){
		if(arr[i]>arr[largest]){
			res= largest;
			largest =i;
		}
		else if(arr[i]!=arr[largest]){
			if(res==-1 || arr[i]>arr[res]){
				res = i;
			}
		}
	}

	return res;

}

int main(){
	int arr[]={5, 10, 20, 11, 13, 2, 4, 56, 8};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<getLargest(arr, 9)<<endl;
	cout<<secondLargest(arr, 9);
	return 0;
}