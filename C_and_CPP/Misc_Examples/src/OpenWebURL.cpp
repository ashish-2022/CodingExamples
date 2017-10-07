#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
  string myUrl, browser = "firefox";
  
  cout << "Please enter an URL to open: ";
  getline(cin, myUrl);

  string cmd = browser + " " + myUrl;
  cout << "Opening: " << myUrl << " using: " << browser << endl;
  system(cmd.c_str());

  return 0;
}

