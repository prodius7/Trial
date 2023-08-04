#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i]; 
            }
        for(int j=0; j<n; j++){
            cin>>b[j];
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(a[i]=b[i]){
                cout<<"NO";
                break;
            }
            
             if(a[i]!=0){
            	a[i]=a[i]-1;
            	count++;
                if(a[i]==b[i]){
                    cout<<"YES";
                    break;
                }
        }
    }
       for(int i=0; i<n; i++){
        if(a[i]==b[i] && count>0){
           cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
        
        
        
    }
}
