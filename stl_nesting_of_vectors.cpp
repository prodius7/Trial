#include<bits/stdc++.h>
using namespace std;

PrintVec(vector< pair<int, int> > &v){
   cout<< "size is:" << " "<< v.size()<<endl;

   for(int i=0; i<v.size(); ++i){
    cout << v[i].first << " " << v[i].second << endl;
   }
   cout << endl;
}

int main(){
   //vector<data_type or container> v;

   vector<pair<int, int>> v = {{1,2}, {2,3}, {3,4}};
   int size;
   cin>>size;
   PrintVec(v);





}