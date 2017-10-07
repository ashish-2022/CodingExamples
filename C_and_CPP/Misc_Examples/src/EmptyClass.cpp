#include<iostream>

using namespace std;

class Empty
{
};

class Intiger
{
  int a;
};

class Character
{
  char c;
};

class CharInt
{
  int a;
  char c;
  int n;
  char c2;
  double f;
  char c3;

};


int main()
{
  Empty e1;
  Intiger i1;
  Character c1;
  CharInt cI1;

  int cSize = sizeof(e1);
  
  cout << "Size of an empty class = " << cSize << "\n";

  cSize = sizeof(i1);
  cout << "Size of Integer class = " << cSize <<"\n";
  
  cSize = sizeof(c1);
  cout << "Size of Character class = " << cSize <<"\n";

  cSize = sizeof(cI1);
  cout << "Size of CharInt class = " << cSize <<"\n";
}

