#include<bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A' + (c-'a');
}

char lower(char c){
	return 'a' + (c-'A');
}

int main(){
	string s;
	cin>>s;
	for(int i=0; i<s.size(); ++i){
		if(s[i]>='a' && s[i]<='z'){
			s[i] = upper(s[i]);
		}
		else if(s[i]>='A' && s[i]<='Z'){
			s[i] = lower(s[i]);
		}
	}
	int result =0;
	for(int i=0; i<s.size(); ++i){
		if(s[i]>='a' && s[i]<='z'){
			result = result + s[i];		
		}
		else if(s[i]>='A' && s[i]<='Z'){
			result = result - s[i];
		}
	}
	if(result<0){
		result = result * -1;
	}
	int flag = 0;
	for(int j=2; j<result; ++j){
		if(result%j==0){
			flag =1;
			break;
		}
	}
	if(flag == 0){
		cout<<1;
	}
	else{
		cout<<0;
	}
}