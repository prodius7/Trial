//Tower of Hanoi

#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C){
	if(n==1){
		cout<<"Move 1 from"<<" "<< A <<" "<< "to" <<" "<< C <<endl;
		return;
	}

	TOH(n-1, A, C, B); // A se B jaana hai using C as auxillary
    
    cout<< "Move"<<" "<< n <<" "<< "from"<<" "<< A <<" "<< "to"<<" "<< C<<endl;
    
    TOH(n-1, B, A, C); // B se C jaana hai using A as auxillary
}

int main()
{
	int n;
	cin>>n;
	TOH(n, 'A', 'B', 'C');
}