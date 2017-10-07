#include<iostream>
#include<string.h>

using namespace std;

class StringClass
{
  char* s;

  public:
    // Constructor
    StringClass(char* str)
    {
       cout << "\nCreating new string...\n";
       int len = strlen(str);
       s = new char[len+1];
       strcpy(s, str);
    }

    // Copy constructor
    StringClass(const StringClass& inStr)
    {
      cout << "Copy constructor called...";
      int len = strlen(inStr.s);
      cout << "\nAllocating memory...\n";
      s = new char[len+1];
      strcpy(s, inStr.s);
    }

    // Assignment operator
    StringClass& operator=(const StringClass& inStr)
    {
      int len1 = strlen(s);
      int len2 = strlen(inStr.s);

      if(len1 != len2)
      {
        cout << "\nRe-allocating memory...\n";
        delete[] s;
        s = new char[len2+1];
      }
      strcpy(s, inStr.s);

      return *this;       
    }

    void print()
    {
      int len = strlen(s);
      char *p = s;

      for(int i=0; i<len; i++)
      {
        cout << *p;
        p++;
      }
    }
};


int main()
{
  StringClass s1("abcd"), s2("xyz"), s3("pqrs");
  StringClass s4(s3);

  s4.print();
  cout << endl;

  s1.print();
  cout << endl;
  s2.print();
  cout << endl;

  s2 = s1;

  s2.print();
  cout << endl;

  s1 = s1;

  s1.print();
  cout << endl;

  return 0;  
}



