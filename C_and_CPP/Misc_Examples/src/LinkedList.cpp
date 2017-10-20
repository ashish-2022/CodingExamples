#include<iostream>

using namespace std;

// structure to store data
struct node {
  int num;
  node* next;
};

// Linked List Implementation
class LinkedList {
  private:
    node* head;
    node* rPtr;

  public:
    LinkedList()
    {
      head = NULL;
    }
    void addNode(int num);
    void deleteNode(int num);
    void reverseList(node* p, node* q);
    void findNode(int num);
    void printList();
    node* getHead();
};

node* LinkedList::getHead()
{
  return head;
}

void LinkedList::addNode(int num)
{
  node* aNode = new node;
  aNode->num = num;
  aNode->next = NULL;

  if(head == NULL)
  {
    head = aNode;
    return;
  }

  node* end = head;

  while(end->next != NULL)
  {
    end = end->next;
  };

  end->next = aNode;    
}

void LinkedList::deleteNode(int num)
{
  node* xNode = head;
  node* prev = NULL;

  if(head->num == num)
  {
    head = head->next;
    delete xNode;
    return;
  }

  while(xNode->num != num)
  {
    prev = xNode;
    xNode = xNode->next;
  };

  prev->next = xNode->next;
  delete xNode;  
}



void LinkedList::reverseList(node* p, node* q)
{
   
   if(q->next != NULL)
   {
     reverseList(p->next, q->next);
   }
   else
   {
     head = q;
   }

   q->next = p; 
   p->next = NULL;
}


void LinkedList::printList()
{
  node* aNode = head;
  while(aNode != NULL)
  {
    cout << aNode->num << "\t";
    aNode = aNode->next;
  };
  cout << "\n";
}

void LinkedList::findNode(int num)
{
   node* fNode = head;

   while(fNode != NULL)
   {
     if (fNode->num == num)
     {
       cout << "\nNode Found :)\n";
       break;
     }

     fNode = fNode->next;
   };

   if(fNode == NULL)
   {
     cout << "\nNode Does not exist :(\n";
   }
}


int main()
{
  LinkedList myList;
  int choice = 0;
  bool exit = false;

  while(!exit)
  {
    cout << "\nEnter:\n1. Add Node \n2. Delete Node\n"
         << "3. Print List\n4. Find Node\n5. Reverse\n"
         << "6. Exit Your choice: ";

    cin >> choice;

    switch(choice)
    {
      case 1:
        {
          int value;
          cout << "\nEnter node value to be added: ";
          cin >> value;
          myList.addNode(value);
          break;
        }
      case 2:
        {
          int value;
          cout << "\nEnter node value to be deleted: ";
          cin >> value;
          myList.deleteNode(value);
          break;
        }
      case 3:
        {
          myList.printList();
          break;
        }
      case 4:
        {
          int value;
          cout << "\nEnter value to be found: ";
          cin >> value;
          myList.findNode(value);
          break;
        }
      case 5:
        {
          cout << "\nPrint reverse list...\n";
          myList.reverseList(myList.getHead(), myList.getHead()->next);
          break;
        }
      case 6:
        {
          cout << "\nExiting...\n";
          exit = true;
          break;
        }
      default:
        {
          cout << "\nPlease enter a valid option.\n";\
          break;
        }
    }
  }

  return 0;
}

