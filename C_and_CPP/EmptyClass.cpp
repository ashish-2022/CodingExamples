#include<iostream>

using namespace std;

class Empty
{
};

class MyInt
{
	int a;
};

class MyInt2
{
	int a;
	int b;
};

class MyFloat
{
	float f;
	double d;
};

int main()
{
  cout << "\nSize of empty class\n";
  
  Empty e;
    
  size_t s = sizeof(e);
  cout << "Size=" << s;
  
  MyInt mi;
  cout << "\nSize of MyInt class\n";
  s = sizeof(mi);
  cout << "Size=" << s;
  
  MyInt2 mi2;
  cout << "\nSize of MyInt2 class\n";
  s = sizeof(mi2);
  cout << "Size=" << s;
  
  MyFloat mf;
  cout << "\nSize of MyFloat class\n";
  s = sizeof(mf);
  cout << "Size=" << s;
}
