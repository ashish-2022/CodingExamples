#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

using namespace std;

std::string exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (!feof(pipe.get())) {
        if (fgets(buffer, 128, pipe.get()) != NULL)
            result += buffer;
    }
    return result;
}


int main()
{
  string output;
  
  output = exec("cp a b 2>&1;echo $?");
  cout << "\nOutput of cmd:\n";
  cout << output;

  output = exec("ls 2>&1;echo $?");
  cout << "\nOutput of cmd:\n";
  cout << output;
 
  //output = exec("echo $?");
  //cout << "\nRetCode of cmd:\n";
  //cout << output;

 return 0;
}

