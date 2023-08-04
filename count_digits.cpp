//Count the no. of digits in a number.

#include<bits/stdc++.h>
using namespace std;

int countdigit(int x)
{
	int res=0;
	while(x>0){
		x=x/10;
		res++;
	}
	return res;
}

int main(){
	int c;
	cin>>c;
	cout<< countdigit(c);
}

//Time complexity - Theta(d), d= No.of digits in the number.