#include<stdio.h>

void printArray(char **p)
{
  printf("p[0] = %s\n", p[0]);
  printf("p[1] = %s\n", p[1]);
  printf("p[2] = %s\n", p[2]);
}

int main()
{
  char *str1 = "abc";
  char *str2 = "xyz";
  char *str3 = "pqr";

  // Array of pointers
  char *arr[3];

  arr[0] = str1;
  arr[1] = str2;
  arr[2] = str3;
  
  printArray(arr);
}

