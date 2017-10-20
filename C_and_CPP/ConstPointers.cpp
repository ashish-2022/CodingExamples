#include<iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;
  int c = 30;
  
  // Normal pointer
  int *p = &a;
  *p = 60;
  
  // Constant integer pointer
  int const *cip = &b;
  b = 30;
  b++;
  cip = &a;
  // *cip = 40;
  
  // Constant pointer to integer
  int * const cpi = &c;
  // cpi = &b;
  *cpi = 50;
  
  // Constant pointer to constant integer
  int const * const cicp = &a;
  // cicp = &b;
  // *cicp = 20;
  a++;
  a = 40;
  
  return 0;
}
