#include<iostream>

using namespace std;

int main()
{
	char str[10] = "MyString";
	//char* str = "MyString";
	char *front = str;
	char *back = str;
	int len = 0;
	while(*back!='\0' && *back != '\n')
	{
		back++; len = len+1;
	}
	back--;
	
	cout << "\nfront=" << *front << ", back=" << *back;
	
	while(front < back)
	{
		cout << "\nfront = " << *front << ", back = " << *back << "\n";
		char c = *front;
		*front = *back;
		*back = c;
		
		front++;
		back--;
	}
	
	front = str;
	cout << "Reversed String = ";
	for(int i=0; i<len; i++)
	{
		cout << *front;
	    front++;
	}
	
	return 0;
}
