#!/bin/python


# Empty dictionary
print "Empty dictionary example"
empty = {}
print empty

# dictionary 
print "\nComplete dictionary example"
food = {"ham" : "yes", "egg" : "yes", "spam" : "no" }
print food

# List in python
print "\nLists in python"
list1=['a','b','c','d']
list2=[1,2,3,4]
print list1
print list2

print "\nZip lists in python"
list_dict = zip(list1 ,list2)
print list_dict

print "\nCreate dictionary from zipped list"
final_dict = dict(list_dict)
print final_dict

print "\nList from dictionary"
# List of keys
myList1 = final_dict.keys()
print myList1
# List of values
myList2 = final_dict.values()
print myList2
# List of items
mylist3 = final_dict.items()
print mylist3

print "\nIterate over dictionary keys"
for key in final_dict:
  print key

print "\nIterate over dictionary keys"
for key in final_dict.iterkeys():
  print key

print "\nIterate over dictionary values"
for val in final_dict.itervalues():
  print val

print "\nIterate over list"
for val in list1:
  print val

print "\nAdd element to dictionary"
final_dict['e'] = 5
print final_dict

print "\nLength of dictionary"
len1=len(final_dict)
print len1

print "\nDelete element from dictionary"
del final_dict['c']
print final_dict

print "\nCreate a list"
myList = ["The", "earth", "revolves", "around", "sun"]
print myList
print "Fourth element of myList = " + myList[3]

print "\nInsert element in list"
myList.insert(0,"Yes")
print myList

print "\nAppend element to a list"
myList.append("NO")
print myList

print "\nDelete element from a list"
myList.remove("Yes")
print myList

print "\nSclice of a list"
print myList[1:4]

print "\nIndex of revolves"
print myList.index("revolves")

print "\nCheck if sun is in myList"
print "sun" in myList

print "\nCheck if moon is in myList"
print "moon" in myList

