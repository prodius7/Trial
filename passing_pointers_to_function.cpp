#include<bits/stdc++.h>
using namespace std;

void increment(int *x){
	(*x)++;
}
int main(){
	int a=4;
	cout<<a<<endl;
	increment(&a); //We pass the address of a to the function. Because the function requires *a, which is a pointer.
	cout<<a<<endl;
}

//It is better to use references instead of pointers.