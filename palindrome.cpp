//A number is palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool pal(int n)
{
	int rev = 0;
	int temp=n;
	while(temp>0){
		int remainder = temp%10;
		rev = (rev*10) + remainder;
		temp = temp/10;
	}
	if(rev==n){
		return true; 
	} 
	else{
		return false;
	}	
}

int main(){
	int c;
	cin>>c;
	cout<< pal(c);
}

