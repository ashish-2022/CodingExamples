#include<stdio.h>

void printVal(char *p)
{
  printf("Print using *p\n");
  printf("Val arr[0] = %c\n", p[0]);
  printf("Val arr[1] = %c\n", p[1]);
  printf("Val arr[2] = %c\n", p[2]);
  printf("Val arr[3] = %c\n", p[3]);
  printf("Val arr[4] = %c\n", p[4]);
}


void printValPtr(char **p)
{
  printf("Print using **p\n");
  printf("Val arr[0] = %c\n", (*p)[0]);
  printf("Val arr[1] = %c\n", (*p)[1]);
  printf("Val arr[2] = %c\n", (*p)[2]);
  printf("Val arr[3] = %c\n", (*p)[3]);
  printf("Val arr[4] = %c\n", (*p)[4]);
}

int main()
{
  char arr[5] = {'a','b','c','d','e'};
  char *ptr;
  char **pptr;

  ptr = arr;
  pptr = &ptr;

  printf("ptr[0] = %c\n", ptr[0]);
  printf("pptr[0] = %c\n", *pptr[0]);

  printf("ptr[1] = %c\n", ptr[1]);
  printf("pptr[1] = %c\n", (*pptr)[1]);

  printf("Calling function:\n");

  printVal(ptr);
  printVal(*pptr);

  printValPtr(&ptr);
  printValPtr(pptr);

  return 0;
}

