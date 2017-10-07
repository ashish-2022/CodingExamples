#include<iostream>

using namespace std;

int main()
{
  int a = 10, b = 20, c = 11;
  int *p1, *p2;

  p1 = &a;
  p2 = &b;

  int const *cp = p1;
  const int *cp2 = p1;

//  *cp2 = 30; // error: assignment of read-only location ‘* cp2’ 
//  *cp = 30;  // error: assignment of read-only location ‘* cp’

  cp = p2;
  cp2 = &c;
  c = 10; 
  *p1 = 40;
  *p2 = 50;
  a++; b++; c++;

  p1 = &c;
//   p1 = cp; // error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]

  cout << "\na = " << a;
  cout << "\nb = " << b << "\n";

  cout << "\n*cp = " << *cp;  
  cout << "\n*cp2 = " << *cp2 << "\n";  
  return 0;
}

