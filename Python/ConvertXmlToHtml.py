#!/usr/bin/python3

from json2html import *
import xmltodict;
import json;

file = open("Hstatus.xml", "rb");

#print(file.readlines());

dictObj=xmltodict.parse(file);

file.close();
#print(dictObj);
#print(json.dumps(dictObj, indent=4))
jsonObj=json.dumps(dictObj);

htmlObj=json2html.convert(json = jsonObj);

print(htmlObj);
