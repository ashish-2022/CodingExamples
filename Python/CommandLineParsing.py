#!/usr/bin/python
from __future__ import print_function
import sys, getopt
import fileinput
import re

prog = sys.argv[0]
usage = 'Usage: python ' + prog + ' -p <param> -v <value>'

def update(param, value):
   file = fileinput.FileInput('FileToUpdate.cfg', inplace=True, backup='.bak')
   for line in file:
       p = re.compile(param + ' = [0-9,a-z,A-Z]*')
       nLine = p.sub(param + " = " + value, line)
       print(nLine, end='')
   file.close()

def main(argv):
   param = ''
   value = ''
   try:
      opts, args = getopt.getopt(argv,"hp:v:",["param=","value="])
   except getopt.GetoptError:
      print(usage)
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print(usage)
         sys.exit()
      elif opt in ("-p", "--param"):
         param = arg
      elif opt in ("-v", "--value"):
         value = arg
   if(param == '' or value == ''):
      print(usage)
      sys.exit(2)
   update(param, value)

if __name__ == "__main__":
   main(sys.argv[1:])
