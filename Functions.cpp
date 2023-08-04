#include<bits/stdc++.h>
using namespace std;

void printHello(){ //Declaring the function 
	cout<<"Hello";
}

int sum(int a, int b){
	int result= a+b;
	return result; /*Since we are returning result, and result is an integer datatype.
                    Hence the return type of the function is int */
}


int main(){
	printHello(); //Calling the function printHello();
    cout<<endl;
	cout<<sum(2,3);
	




}