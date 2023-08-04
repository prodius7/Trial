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
   vector<int> v[N]; 
   for(int i=0; i<N; ++i){
      int n;
      cin>>n;
      for(int j=0; j<n; ++j){
         int x;
         cin>>x;
         v[i].push_back(x);
      }
   }

   for(int i=0; i<N; ++i){
      PrintVec(v[i]);
   }





}