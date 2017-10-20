#include<iostream>

using namespace std;

class Base
{
	int a;
	
	public:
	Base()
	{
		a = 1;		
	}
	
	public:
	  void printData()
	  {
		  cout << "\nData from Base\n";
	  }
	  
	  virtual void printNo() = 0; // Add pure virtual function to prevent Object Sclicing
};

class Derived: public Base
{
	int b;
	
	
	public:
	Derived()
	{
		b = 2;
	}
	
	void printData()
	  {
		  cout << "\nData from Derived\n";
	  }
	  
	void printNo()
	{
		cout << "\nData of class is = " << b;
	}

};

int main()
{
  Base *b = new Derived();
  
  b->printData();
  b->printNo(); // Object Sclicing:  error: ‘class Base’ has no member named ‘printNo’
  
  return 0;
  
}

