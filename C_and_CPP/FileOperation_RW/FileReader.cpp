#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  bool exit = false;

  while(!exit)
  {
    int choice = 0;
    cout << "Enter 1 to read 2 to exit: ";
    cin >> choice;

    switch(choice)
    {
      case 1:
        {
          ifstream myfile ("example.txt");
          if (myfile.is_open())
          {
            while ( getline (myfile,line) )
            {
              cout << line << '\n';
            }
            myfile.close();
          }
          else cout << "Unable to open file"; 
          break;
        }
      case 2:
        {
          exit = true;
          break;
        }
      default:
        {
          cout << "\nPlease enter valid option...\n";
          break;
        }
    }
  }

  return 0;
}

