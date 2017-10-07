#include<iostream>

using namespace std;

int main()
{
  cout << "Test Int array\n";

  int a[5] = {1,2,3,4,5};
  
  cout << *a << "\n"; 
  cout << *(a+1);

  return 0;
}
