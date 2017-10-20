#include<iostream>

using namespace std;


class Singleton
{
  private:
    int a;

    // Constructor
    Singleton()
    {
      a = 2;
    }

    // Assignment operator
    Singleton& operator=(const Singleton& myObj)
    {}

    // Copy Constructor
    Singleton(const Singleton& myObj){}

  public:
    static bool isCreated;
    static Singleton* instance;

    static Singleton* getInstance()
    {
      if(!isCreated)
      {
        cout << "\nCreating Object...\n";
        instance = new Singleton;
        isCreated = true;
      }

      return instance;
    }

    void print();  
};

// Instantiate static members
Singleton* Singleton::instance;
bool Singleton::isCreated;

void Singleton::print()
{
  cout << "\nObject Details:";
  cout << "\na = " << a <<"\n";
}


int main()
{
  cout << "\nCreate s1\n";
  Singleton* s1 = Singleton::getInstance();
  cout << "\nprint s1\n";
  s1->print();

  cout << "\nCreate s2\n";
  Singleton* s2 = Singleton::getInstance();
  cout << "\nprint s2\n";
  s2->print();

  //Singleton xS; // Cannot create duplicate object
  //Singleton yS(*s1); // Cannot invoke copy constructor
  //Singleton zS = *s1; // Not possible at all you just cant create object

  return 0;
}

