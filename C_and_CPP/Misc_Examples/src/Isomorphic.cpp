#include<iostream>
#include<map>

#include<stdio.h>
#include<string.h>

using namespace std;

bool isIsomorphic(char *s1, char *s2)
{
  map<char, char> map1;
  map<char, char> map2;
  map<char, char>::iterator it;

  int l1 = strlen(s1);
  int l2 = strlen(s2); 
  
  /* Check if strings have same length */
  if (l1 != l2)
  {
     return false;
  }

  for(int i=0; i<l1-1; i++)
  {
    /* First string as key */
    /* ------------------- */
    /* Find if match is there in map */
    it = map1.find(*s1);
    if(it == map1.end())
    {   
      /* Insert new pair */
      map1.insert(pair<char,char>(*s1, *s2));
    }
    else
    {
      /* Check if the pair is same */
      if(it->second != *s2)
      {
         /* Same key with different value */
         return false;
      }
    } 

    /* Second string as key */
    /* -------------------- */
    it = map2.find(*s2);
    if(it == map2.end())
    {
      /* Insert new pair */
      map2.insert(pair<char,char>(*s2, *s1));
    }
    else
    {
      /* Check if the pair is same */
      if(it->second != *s1)
      {
         /* Same key with different value */
         return false;
      }
    }
    
    s1++; s2++; 
  }

  return true; 
}


int main()
{
  cout << "Program to detect isomorphic strings...\n";

  char str1[25];
  char str2[25];

  /*Get input from user*/
  cout << "Enter first string:\n";
  fgets(str1, sizeof(str1), stdin);
  cout << "Enter second string:\n";
  fgets(str2, sizeof(str2), stdin);


  bool isIso = isIsomorphic(str1, str2);

  (isIso == true)? cout << "YES\n": cout << "NO\n";

  return 0;
}

