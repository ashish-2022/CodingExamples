#include <iostream>


char* getArray()
{
	char* arr2 = new char [10];
	for(int i=0; i<10; i++)
    {
		arr2[i] = 'a';
	}
	
	return arr2;
}

int main ()
{
  int arr[10] = {0};
  
  for(int i=0; i<10; i++)
  {
	  std::cout << "arr[" << i << "] = " << arr[i] << "\n";
  }
  
  std::cout << "\nArray Pointer:\n";
  char* pArr = getArray();
  
  for(int i=0; i<10; i++)
  {
	  std::cout << "pArr[" << i << "] = " << pArr[i] << "\n";
  }
  
  delete[] pArr;
  
  return 0;
}

