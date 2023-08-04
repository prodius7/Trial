#include<bits/stdc++.h>
using namespace std;

PrintVec(vector<int> v){
   cout<< "size is:" << " "<< v.size()<<endl;

   for(int i=0; i<v.size(); ++i){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}

int main(){
   //vector<data_type or container> v;

   vector<int> v;
   int size;
   cin>>size;
   for(int i=0; i<size; ++i){
     int x;
     cin>>x;
     v.push_back(x); //O(1)
   }

   PrintVec(v);





}