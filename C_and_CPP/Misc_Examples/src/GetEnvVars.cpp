#include <stdio.h>      /* printf */
#include <stdlib.h>     /* getenv */

int main ()
{
  char* pPath;
  pPath = getenv ("PATH");
  if (pPath!=NULL)
    printf ("The current path is: %s\n",pPath);
  return 0;
}

