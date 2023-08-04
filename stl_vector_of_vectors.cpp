#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &v){
   cout<< "size is:" << " "<< v.size()<<endl;

   for(int i=0; i<v.size(); ++i){
    cout << v[i]<< " "<< endl;
   }
   cout << endl;
}

int main(){
   //vector<data_type or container> v;

   int N;
   cin>>N;
   vector<vector<int>> v; 
   for(int i=0; i<N; ++i){
      int n;
      cin>>n;
      vector<int> temp;
      for(int j=0; j<n; ++j){
         int x;
         cin>>x;
         temp.push_back(x);
      }
      v.push_back(temp);
   }

   for(int i=0; i<N; ++i){
      PrintVec(v[i]);
   }





}