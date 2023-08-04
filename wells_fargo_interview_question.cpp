#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> v(10);
  for(int i=0; i<v.size(); ++i){
   int x;
   cin>>x;
   v.push_back(x);
  }
  int difference =0;

  vector<int> v2(10);
  for(int i=0; i<v.size(); ++i){
   for(int j=0; j<v.size(); ++j){
     difference = v[i]-v[j];
     v2.push_back(difference);
   }
  }

  for(int i=0; i<v2.size(); ++i){
   cout<< v2[i]<< " ";
  }






}