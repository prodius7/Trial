#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    // p = make_pair(2, "sharma");
    
    // Another simple way to declare pair -
    p = {2, "sharma"}; 
    cout << p.first << " " << p.second << endl;

    //Copying a pair by value
    pair<int, string> p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
 

    //Copying a pair by reference
    pair<int, string> &p2 = p;
    p2.first = 3;
    cout << p.first << " " << p.second << endl;

    cout<<endl;

    //Declaring an array of pair
    //Pairs are generally used to establish a relation between 2 things.
    //Establishing a realtion between the same indices of array a and b below -
    int a[] = {1,2,3};
    int b[] = {2,3,4}; 
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(int i = 0; i<3; ++i){
    	cout<< p_array[i].first << " " << p_array[i].second << endl;
    }

    cout<< endl;

    //Performing an operation on this established realtion now - 
    swap(p_array[0], p_array[2]);
    for(int i = 0; i<3; ++i){
    	cout<< p_array[i].first << " " << p_array[i].second << endl;
    }








}