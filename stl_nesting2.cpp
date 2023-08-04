#include<bits/stdc++.h>
using namespace std;

PrintVec(vector< pair<int, int> > &v){
   cout<< "size is:" << " "<< v.size()<<endl;

   for(int i=0; i<v.size(); ++i){B
    cout << v[i].first << " " << v[i].second << endl;
   }
   cout << endl;
}

int main(){
   //vector<data_type or container> v;

   vector<pair<int, int>> v;
   PrintVec(v);
  
   int size;
   cin>>size;
   for(int i=0;i<size; ++i){
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});
   }
   
   PrintVec(v);





}