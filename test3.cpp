#include<iostream> 
using namespace std; 
  
class Base           
{ 
    public: 
        virtual void show() = 0;
        virtual void print() = 0; 
}; 
  
class Derived:public Base 
{ 
    public: 
        void show() 
        {    cout << "Show Function in Derived class called"; } 
};
  
int main() 
{ 
    Base obj;        
    Base *b; 
    Derived d; 
    b = &d; 
    b->show(); 
}