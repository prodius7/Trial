//Pass by value and Pass by references.
#include<bits/stdc++.h>
using namespace std;

void increment(int &n, int n1){
	n++;
	n1++;
}

int main(){
	int a=3, b=5;
	cout<< a << " " << b << endl;
	increment(a,b);
	cout<< a << " " << b << endl;
}