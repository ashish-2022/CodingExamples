#include<iostream>

using namespace std;


class A
{
  private:
    int a;
    int b;

  public:
    // Constructor
    A()
    {
      a = 0;
      b = 0;
    }

    // parameterised constructor
    A(int aVar, int bVar)
    {
      a = aVar;
      b = bVar;
    }

    // Copy constructor
    A(const A& myA)
    {
      a = myA.a;
      b = myA.b;
    }

    // Assignment Operator
    A& operator=(const A& myA)
    {
      a = myA.a;
      b = myA.b;
      return *this;
    }

    // Function to print object details
    void print()
    {
      cout << "\nData Members:";
      cout << "\na = " << a;
      cout << "\nb = " << b << "\n";
    }
};

int main()
{
  cout << "\nCreate object with constructor oA1\n";
  A oA1;
  oA1.print();
  
  cout << "\nCreate object with parameterised constructor oA2\n";
  A oA2(2,4);
  oA2.print();

  cout << "\ncreate object using copy constructor oA3\n";
  A oA3(oA2);
  oA3.print();

  cout << "\nAssign oA2 to oA1 using assignment operator\n";
  oA1 = oA2;
  cout << "\nprint oA1\n";
  oA1.print();

  cout << "\nAssign oA1 to oA1 using assignment operator\n";
  oA1 = oA1;
  cout << "\nprint oA1\n";
  oA1.print();
  
  return 0;  
}

