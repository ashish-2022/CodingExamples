#include "MyClass1.h"
#include <iostream>
#include <libxml/parser.h>
#include <libxml/tree.h>

using namespace std;

extern "C" MyClass* create_object()
{
  return new MyClass;
}

extern "C" void destroy_object( MyClass* object )
{
  delete object;
}

static void print_element_names(xmlNode * a_node)
{
   xmlNode *cur_node = NULL;

   for (cur_node = a_node; cur_node; cur_node =
      cur_node->next) {
      if (cur_node->type == XML_ELEMENT_NODE) {
         printf("node type: Element, name: %s\n",
            cur_node->name);
      }
      print_element_names(cur_node->children);
   }
}

void readXmlFile()
{
  xmlDoc *doc = NULL;
  xmlNode *root_element = NULL;
  doc = xmlReadFile("MyXML.xml", NULL, 0);

  if (doc == NULL){
    printf("error: could not parse file %s\n", "MyXML.xml");
    exit(-1);
  }

  /*Get the root element node */
  root_element = xmlDocGetRootElement(doc);
  print_element_names(root_element);
  xmlFreeDoc(doc);       // free document
  xmlCleanupParser();    // Free globals
}

MyClass::MyClass()
{
  x = 20;
}

void MyClass::DoSomething()
{
  cout<<x<<endl;
  readXmlFile();
}

