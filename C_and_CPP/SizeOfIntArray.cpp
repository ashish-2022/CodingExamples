#include <iostream>


template<typename T,int N> 
//template argument deduction
void size(T (&arr1)[N]) //Passing the array by reference 
{
   size_t size;
   size=sizeof(arr1)/sizeof(arr1[0]);  

   std::cout<<size<<std::endl; //Correctly prints the size of arr

   //EDIT

   std::cout<<N; //Correctly prints the size too [cool trick ;-)]
}

int main()
{
   int list_1[]={1,5,7,8,1,1,4,5,7,7,7,8,10,20};
   size(list_1);

   return 0;
}
