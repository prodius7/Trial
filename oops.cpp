#include<bits/stdc++.h>
using namespace std;

class Hero{
   
  private:
   //properties
   int health;
   char level;
   void print(){
    cout<< level<< endl;
   }


 public:

   int getHealth(){
    return health;
   }


   char getLevel(){
    return level;
   }

   void setHealth(int h){
    health = h;
   }

   void setLevel(char l){
    level = l;
   }


};


int main(){
  
   Hero ramesh; //creating an object

   // cout<< ramesh.health <<endl;
   // cout<< ramesh.level  <<endl;

   ramesh.setHealth(70);
   ramesh.setLevel('A');

   cout<< ramesh.getHealth() <<endl;
   cout<< ramesh.getLevel() <<endl;

 
}