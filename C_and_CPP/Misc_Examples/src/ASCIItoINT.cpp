#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
   string s = "45";
   int i = atoi(s.c_str());

   cout << "i = " << i << "\n";
   i++;
   cout << "i = " << i << "\n";
}

