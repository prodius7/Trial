#include<bits/stdc++.h>
using namespace std;

int main(){
  
 long long int t;
 cin>>t;
 while(t--){
  long long int n, c;
  cin>>n>>c;
  
  vector<long long> v(n);
  for(long long int i=0; i<n; i++){
     cin>>v[i];
  }

   long long w;
   long long l = 0;
   long long r = c;

   while(l<r){
    w = l + (r-l)/2;
    long long sum = 0;
    for(long long i=0; i<n; i++){
       sum += ((v[i]+ w)*(v[i]+ w));
    }
    if(sum == c)
         cout<< w/2<<endl;
    else if(sum > c)
        r--;
    else
        l++;
   }


}
}