#include<iostream>

using namespace std;

class Singleton
{
  static Singleton *instance;
  
  // Constructor
  Singleton(){};
  // Copy Constructor
  Singleton(const Singleton &s);
  // Assignment operatpor
  Singleton& operator=(Singleton &s);
  
  public:
  
  static Singleton* getInstance()
  {
	  if(!instance)
	  {
		  cout << "\nCreating Object\n";
		  instance = new Singleton;
	  }
	  cout << "\nReturn Object\n";
	  return instance;
  }
};

Singleton* Singleton::instance = 0;
Singleton* s = Singleton::getInstance();


int main()
{
	cout << "\nInside Main\n";
	Singleton* p = Singleton::getInstance();
}




