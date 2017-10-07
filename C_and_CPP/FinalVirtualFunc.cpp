#include <iostream>
using namespace std;

class Base {
public:
    // virtual bool someGuaranteedResult() final { return true; }
	virtual bool someGuaranteedResult() { return true; }
};

class Derived : public Base {
public:
    bool someGuaranteedResult() { return false; /* Haha I broke things! */ }
};

int main()
{
	Derived d;
	
	cout << "Derived: " << d.someGuaranteedResult();
	
	return 0;
}
