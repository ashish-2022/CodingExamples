// Program to merge 2 sorted arrays
#include<iostream>

using namespace std;



int main()
{
  int arr1[] = { 1, 3, 5, 6, 8 };
  int arr2[] = { 2, 4, 7, 9 };
  int size1 = 5, size2 = 4 , size3 = size1 + size2;
  int arr3[size3];
  int index1 = size1-1, index2 = size2-1, index3 = size3-1;
  

  while(index3 >= 0)
  {
    if(index1 >= 0 && index2 >= 0)
    {
      if(arr2[index2] < arr1[index1])
      {
        arr3[index3] = arr1[index1];
        index1--;
      } 
      else
      {
        arr3[index3] = arr2[index2];
        index2--;
      }
    }
    else if (index1 < 0)
    {
      arr3[index3] = arr2[index2];
      index2--;
    }
    else
    {
      arr3[index3] = arr1[index1];
      index1--;
    }
   
    index3--;
  }

  cout << "\nSorted merged array:\n";
  for(index3 = 0; index3 < size3; index3++)
  {
    cout << arr3[index3];
  }
  cout << "\n";
}

