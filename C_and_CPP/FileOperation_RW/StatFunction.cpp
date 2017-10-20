#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main() {

  struct stat buf;
  if(stat("/usr/openv/netbackup/bp.conf",&buf) != -1)
  {
    cout << "File Exists.\n";
    cout << "File Size: " << buf.st_size << "\n";
  }
  else
  {
    cout << "File /usr/openv/netbackup/bp.conf missing";
  }

  if(stat("/usr/openv/var/global/nbcl.conf",&buf) != -1)
  {
    cout << "File Exists.\n";
    cout << "File Size: " << buf.st_size << "\n";
  }
  else
  {
    cout << "File /usr/openv/var/global/nbcl.conf missing \n";
  }

  

  return 0;
}

