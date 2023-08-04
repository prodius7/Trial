//understanding arrays with pointers.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	a[0]=2;
	a[1]=4;
	cout<<"a: "<< a << endl;// Proves a is a pointer.
	cout<<"&a[0]: "<< &a[0]<< endl;
	cout<<"*a: "<< *a<< endl;
	cout<<"a+1: "<< a+1<< endl;
	cout<<"&a[1]: "<< &a[1]<< endl;
	cout<<"*(a+1): "<< *(a+1)<< endl;
	cout<<"a[1]: "<< a[1]<< endl;

}