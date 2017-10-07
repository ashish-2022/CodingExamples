#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

using namespace std;

std::string exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}


int main()
{
  string output;

  output = exec("ls");

  cout << "\nCmd OutPut:\n";
  cout << output;
}

