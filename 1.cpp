#include<bits/stdc++.h>
using namespace std;

class Complex;

class Calculator{
public:
	int add(int x, int y)
	{
		return x+y;
	}

	int sumrealcomplex(Complex, Complex);
	int sumr_comp_complex(Complex o1, Complex o2);
};



class Complex{
	int a ,b;
	void printno();
	friend class Calculator;		///Defined the entire class Calculator as a friend of Complex class

	// friend int Calculator::sumrealcomplex(Complex, Complex);      ///What we have done here is we have defined sumreal..() of Class Calculator as a friend function individually so that it can access 
																	//pvt members of Complex class
public:
	void setno(int x, int y)
	{	
		a = x;
		b = y;
		printno();
	}


};

int Calculator::sumrealcomplex(Complex o1, Complex o2)
{
	return o1.a+o2.a;
}

int Calculator::sumr_comp_complex(Complex o1, Complex o2)
{
	return o1.b+o2.b;
}


void Complex :: printno()
{
	cout<<"The no is "<<a<<" + "<<b<<"i"<<endl;
} 


int main(){
	Complex o1, o2;
	o1.setno(2,4);
	o2.setno(5,7);

	 Calculator calc;
	 int res_real = calc.sumrealcomplex(o1,o2);
	 int res_comp = calc.sumr_comp_complex(o1,o2);
	 cout<<"REAL SUM="<<res_real<<endl;
	 cout<<"COMPLEX SUM="<<res_comp<<endl;

return 0;
}
