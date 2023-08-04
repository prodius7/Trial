#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start, int end){
	if(start>=end){
		return true;
	}

	return (s[start]==s[end]) && palindrome(s , start+1 , end-1); //Works as an AND operator.

}

int main()
{
	string s;
	cin>>s;
	int start=0;
	int end= s.size()-1;
	cout<< palindrome(s, start, end);
	
}