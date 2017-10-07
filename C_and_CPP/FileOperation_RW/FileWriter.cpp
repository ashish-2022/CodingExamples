#include <iostream>
#include <fstream>
#include<unistd.h>

using namespace std;

int main () {

  int nAction = 0;
  while(nAction < 5)
  {
    cout << "\nWriting to File...\n";

    ofstream myfile ("example.txt", ios::app);
    if (myfile.is_open())
    {
      myfile << nAction << ": This is a line.\n";
      myfile << nAction << ": This is another line.\n";
      myfile.close();
    }
    else 
    {
      cout << "Unable to open file";
    }

    cout << "\nSleeping for 5 seconds...\n";

    sleep(5);
    nAction++;
  }
  return 0;
}

