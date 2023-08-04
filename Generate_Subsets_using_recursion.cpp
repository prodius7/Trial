//Given a string s, Generate all subsets of the string

#include<bits/stdc++.h>
using namespace std;
void Subsets(string &s, string curr= "", int index=0){
	
	if(index == s.length()){
		cout<< curr <<endl;
		return;
	}

	Subsets(s, curr, index+1);
	Subsets(s, curr+s[index], index+1);   
}

int main()
{
	string s;
	cin>>s;
	Subsets(s); 
}