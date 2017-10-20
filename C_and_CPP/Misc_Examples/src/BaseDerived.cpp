#include<iostream>
#include<string>

using namespace std;


class Computer
{
  //string name;

  public:

    string name;

    Computer()
    {
      cout << "\nConstructor : Computer\n";
      name = "Computer";
    }

    // Virtual Destructor
    virtual ~Computer()
    {
      cout << "\nDestructor : Computer\n";
    }

    virtual void getDisk()
    {
      cout << "\nDisk size of Computer: 100GB\n";
    }

    void getRAM()
    {
      cout << "\nRAM of Computer = 4GB\n";
    }

    void getInfo()
    {
      cout << "\nName = " << name << "\n";
    }
};

class Laptop : public Computer
{
  public:
    Laptop()
    {
      cout << "\nConstructor : Laptop\n";
      name = "Laptop";
    }

    ~Laptop()
    {
      cout << "\nDestructor : Laptop\n";
    }

    void getDisk()
    {
      cout << "\nDisk size of Laptop: 400GB\n";
    }

    void getRAM()
    {
      cout << "\nRAM of Laptop = 3GB\n";
    }
};

class Desktop : public Computer
{
  public:
    Desktop()
    {
      cout << "\nConstructor : Desktop\n";
      name = "Desktop";
    }

    ~Desktop()
    {
      cout << "\nDestructor : Desktop\n";
    }

    void getDisk()
    {
      cout << "\nDisk size of Desktop: 200GB\n";
    }

    void getRAM()
    {
      cout << "\nRAM of Desktop = 8GB\n";
    }
};


int main()
{
  cout << "\n* Create objects with base class pointer using new Derived *\n";
  Computer *c1 = new Laptop;
  Computer *c2 = new Desktop;

  c1->getInfo();
  c2->getInfo();

  c1->getRAM(); // Base class func called.
  c2->getRAM();

  c1->getDisk(); // Derived class func called as it is virtual in base.
  c2->getDisk();

  delete c1; // If we don't use virtual destructor derived class destructor will not be called.
  delete c2;

  cout << "\n* Creating normal objects *\n";
  Laptop l1;
  Desktop d1;

  l1.getInfo();
  d1.getInfo();

  l1.getRAM();
  d1.getRAM();

  l1.getDisk();
  d1.getDisk();

  return 0;
}

