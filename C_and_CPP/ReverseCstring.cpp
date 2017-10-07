#include<iostream>

using namespace std;

int main()
{
	char *s = "MyString";
	
	char *front = s, *back = s;
	
	while(*back!='\0')
	{
		back++;
	}
	back--;
	
	cout << "\nfront=" << *front << ", back=" << *back;
	
	int i = 0;
	while(i < 4)
	{
		cout << "\nfront = " << *front << ", back = " << *back << "\n";
		char c = front[0];
		front[0] = back[0];
		back[0] = c;
		
		front++;
		back--;
		i++;
	}
	
	front = s;
	cout << "Reversed String = ";
	while(front != '\0')
	{
		cout << *front;
	    front++;
	}
	
	return 0;
}
