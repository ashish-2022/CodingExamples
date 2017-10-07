// 2D Array implementation
#include<iostream>

using namespace std;

void printArr1(int arr[3][4]);
void printMatrix(int arr[3][4]);

int main()
{
  int arr[3][4] = { 
    {1,2,3,4}, 
    {5,6,7,8}, 
    {9,10,11,12}
  };

  printMatrix(arr);
//  printArr1(arr);
  
  return 0;
}

void printMatrix(int arr[3][4])
{
  cout << "\nNumber Matrix:\n";
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
    {
      cout << arr[i][j] << "\t";
    }
    cout << "\n";
  }
}

void printArr1(int arr[3][4])
{
  cout << "arr[0][0] = " << arr[0][0] << "\n";
  cout << "arr[1][1] = " << arr[1][1] << "\n";
  cout << "arr[2][2] = " << arr[2][2] << "\n";
  cout << "arr[0][1] = " << arr[0][1] << "\n";
  cout << "arr[1][2] = " << arr[1][2] << "\n";
  cout << "arr[2][3] = " << arr[2][3] << "\n";
}

