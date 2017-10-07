/*
 * @File: StringOpr.c 
 * @Date: Wed May 25 09:56:02 IST 2016 
 *
 * @Description: This code is implementation of string functions.
 *               This code takes care of all '\0' and '\n' terminated string.
 */

#include<stdio.h>

/* Calculates the length of string 
 * @param: s - pointer to the char array.
 * @return: length of char array.
 */

int s_length(char *s)
{
  int len = 0;
  while(*s != '\0' && *s != '\n')
  {
    len = len + 1;
    s++;
  }
  return len;
}

/* Reverse the string
 * @param: s - pointer to the char array.[I/O]
 */
void s_reverse(char *s)
{
  char *b, *e, t;
  int len = 0;
  b = s;
  e = s;

  while(*e != '\0' && *e != '\n')
  {
    len = len + 1;
    e++;
  }

  e--;
  
  for(int c = 0; c < len/2; c++)
  {
    t = *b;
    *b = *e;
    *e = t;

    b++;
    e--;
  }   
}

/* Prints the char string 
 * @param: s - pointer to the char array.
 */
void s_print(char *s)
{
  while(*s != '\0' && *s != '\n')
  {
    printf("%c",*s);
    s++;
  }
}

/*
 * Start main function
 */
int main()
{
  printf("\nString Operations...\n");
  char str[25];

  printf("Enter String:\n");
  fgets(str, sizeof(str), stdin);

  s_print(str);

  printf("\n");

  int length = s_length(str);
  printf("\nLength = %d", length);

  printf("\n");

  s_reverse(str);

  printf("\n");

  s_print(str); 

  printf("\n");
  return 0;
}

