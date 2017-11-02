#include <dlfcn.h>
#include <iostream>
#include "MyClass1.h"

using namespace std;

int main(int argc, char **argv)
{
  /* on Linux, use "./libMyClass1.so" */
  void* handle = dlopen("libMyClass1.so", RTLD_LAZY);

  MyClass* (*create)();
  void (*destroy)(MyClass*);

  create = (MyClass* (*)())dlsym(handle, "create_object");
  destroy = (void (*)(MyClass*))dlsym(handle, "destroy_object");

  MyClass* myClass = (MyClass*)create();
  myClass->DoSomething();
  destroy( myClass );
}

