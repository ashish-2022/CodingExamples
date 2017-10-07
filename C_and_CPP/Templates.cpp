#include<iostream>

template <typename T>
inline T max(T a, T b) {
    return a > b ? a : b;
}

int main()
{
	int a = 10, b = 20;
	float x = 10.25, y = 11.45;
	
	int c = max(a, b);
	float z = max(x, y);
	
	
	std::cout << "\nMAX int = "<< c << "\n";
	std::cout << "\nMAX Float = "<< z << "\n";
}

