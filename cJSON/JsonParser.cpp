#include<iostream>
#include "cjson/cJSON.h"

using namespace std;

int main()
{
  int i;
  cJSON *elem;
  cJSON *name;
  char *json_string = "[{\"id\":\"25139\",\"date\":\"2016-10-27\",\"name\":\"Komfy Switch With Camera DKZ-201S\\/W Password Disclosure\"},{\"id\":\"25117\",\"date\":\"2016-10-24\",\"name\":\"NETDOIT weak password Vulnerability\"}]";
  cJSON *root = cJSON_Parse(json_string);
  int n = cJSON_GetArraySize(root);
  
  cout << "\n" << json_string << endl;
  for (i = 0; i < n; i++) {
    elem = cJSON_GetArrayItem(root, i);
    name = cJSON_GetObjectItem(elem, "name");
    cout<< "name:" <<  name->valuestring << endl;
  }
  return 0;
}

