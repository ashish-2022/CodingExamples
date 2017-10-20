#include<iostream>

using namespace std;

struct node {
  int num;
  node* left;
  node* right;
};

class BinaryTree
{

  node *root;

  public:

  BinaryTree()
  {
    root = NULL;
  }

  void addNode(node* xNode, int num);

  void deleteNode(node* xNode, int num) {
    cout << "\nNOT IMPLEMENTED\n";
  }

  node* getRoot()
  {
    return root;
  }

  void printTree(node* root);
  void printLeftTree(node* aNode);
  void printRightTree(node* aNode);
};

/* Put smaller elements to LHS and >= to RHS */
void BinaryTree::addNode(node* xNode, int num)
{
  if (xNode == NULL)
  {
    node* aNode = new node;
    aNode->num = num;
    root = aNode;
    return;
  }

  if (xNode->num > num)
  {
    if (xNode->left == NULL)
    {
      node* aNode = new node; 
      aNode->num = num;
      xNode->left = aNode;
      return;
    }
    else
    {
      addNode(xNode->left, num);
    }
  }
  else
  {
    if (xNode->right == NULL)
    {
      node* aNode = new node; 
      aNode->num = num;
      xNode->right = aNode;
      return;
    }
    else
    {
      addNode(xNode->right, num);
    }
  }
}  
    
void BinaryTree::printLeftTree(node* aNode)
{
  if(aNode == NULL)
  {
    return;
  }

  if(aNode->left != NULL)
  {
    printLeftTree(aNode->left);
  }
  cout << aNode->num;
}
  


void BinaryTree::printRightTree(node* aNode)
{
  if(aNode == NULL)
  {
    return;
  }

  cout << aNode->num;
  if(aNode->right != NULL)
  {
    printRightTree(aNode->right);
  }
}


void BinaryTree::printTree(node* root)
{
  printLeftTree(root->left);
  cout << root->num;
  printRightTree(root->right);
}

int main()
{
  BinaryTree myTree;

  for (int i=5; i < 10; i++)
  {
    myTree.addNode(myTree.getRoot(), i);
  }

  for (int i=4; i > 0; i--)
  {
    myTree.addNode(myTree.getRoot(), i);
  }


  myTree.printTree(myTree.getRoot());
  cout << endl;

  return 0;
}
        
