#include <bits/stdc++.h>
using namespace std;
int main(){
	int x=4;
	int *p_x=&x;
	cout<< "Addr x: "<< &x <<endl;
	cout<<"Val p_x: "<< p_x <<endl;
	cout<<"Val *p_x: "<< *p_x <<endl;
	*p_x = 5;
	cout<< "Updated value of x: "<< x << endl; //We can use pointers to change the value of variable too.
	cout<< "p_x + 1:"<< p_x + 1<< endl;
	//Double Pointers
	int **p_p_x = &p_x;
	cout<<"Addr of p_x: "<< &p_x<< endl;
	cout<<"Value of p_p_x is: "<< p_p_x << endl;
	cout<<"Value of *p_p_x is: "<< *p_p_x <<endl;
	cout<<"Value of **p_p_x is: "<<**p_p_x <<endl;
	//We can also change the value of x using double pointer.
	**p_p_x = 6;
	cout<<"Updated value of x: "<< x <<endl;

	

}