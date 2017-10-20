#include<iostream>

using namespace std;

int main()
{
  cout << "\nInteger Array\n";
  
  int arr[5]={1,2,3,4,5};
  
  
  for (int i=0; i<5; i++)
  {
    cout << arr[i];
  }

  int *ptArr = arr;
  
  cout << "\nPrint array using pointer\n";
  for (int i=0; i<5; i++)
  {
    cout << *ptArr; ptArr++;
  }
  
  cout << "\nSize of Array\n";
  
  size_t s = sizeof(arr)/sizeof(arr[0]);
  
  cout << "Size = " << s;
  
  cout << "\nSize of Array using pointer\n";
  size_t s1 = sizeof(ptArr)/sizeof(int);
  cout << "Size = " << s;
  
}
