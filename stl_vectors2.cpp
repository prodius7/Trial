#include<bits/stdc++.h>
using namespace std;

PrintVec(vector<string> &v)//passing by reference to avoid copying of vector, which takes O(n) time
{
   cout<< "size is:" << " "<< v.size()<<endl;

   for(int i=0; i<v.size(); ++i){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}

int main(){
   //vector<data_type or container> v;

   vector<string> v;
   int size;
   cin>>size;
   for(int i=0; i<size; ++i){
     string s;
     cin>>s;
     v.push_back(s); //O(1)
   }

   PrintVec(v);





}