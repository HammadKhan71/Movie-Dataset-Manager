//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.

//                                                DSA PROJECT 
 
//                              MADE BY : HAMMAD ULLAH KHAN 24I-2539 
//                                        MOHID ABBAS 24I - 0074
//                                                 AI - B


//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.

#pragma once
#include <iostream>

// IMPLMENTATION OF AVL TREE THAT CAN STORE ANY DATA TYPE AS WE ARE USING TEMPLATES FOR THIS. WE USED THE 
// AVL TREE ALGORITHM TO MAINTAIN BALANCE IN THE TREE MOST IMPORTANTLY TOS STRORE THE MOVIE DATA IN A BALANCED MANNER
// FOR EASY LOOKUP AND MANAGEMENT

template <typename T>
class AVLTree 
{


struct Node 
{
      T data;
    Node* left;
Node* right;
    int height;

Node(const T& value) 
{
data=value;
left=nullptr;

right=nullptr;
height=1;
}
};

Node* root;
int size;


int getHeight(Node* node) 
{
if (node == nullptr)
{return 0;
}
else
{return node->height;
}}

// GBF
int getBalance(Node* node) 
{
if (node == nullptr)
{
return 0;
}
else

{return getHeight(node->left)-getHeight(node->right);
}
}

// HEIGHT UPDATION
void updateHeight(Node* node) 
{
if (node != nullptr) 
{
int leftHeight=getHeight(node->left);

int rightHeight=getHeight(node->right);

if (leftHeight>rightHeight)
{  node->height=1+leftHeight;
}
else
{
node->height=1+rightHeight;
}
}
}

// Right rotation
Node* rotateRight(Node* y) 
{
Node* x=y->left;
Node* T2=x->right;

x->right=y;
y->left=T2;

updateHeight(y);

updateHeight(x);

return x;
}

// Left rotation
Node* rotateLeft(Node* x) 
{
Node* y=x->right;
Node* T2=y->left;

y->left=x;
x->right=T2;

updateHeight(x);

updateHeight(y);

return y;
}



Node* insertHelper(Node* node, const T& value) 
{

if (node == nullptr) 
{
size++;

return new Node(value);
}

if (value < node->data) 
{
node->left=insertHelper(node->left, value);
}
 else if (value>node->data) 
{
node->right=insertHelper(node->right, value);
}
 else 
{
// no dups allowed
return node;
}

// HEIGHT UDATATION
updateHeight(node);

//BALANCE FACTOR
int balance=getBalance(node);

// LL
if (balance>1 && value < node->left->data) 
{
return rotateRight(node);
}

// RR
if (balance < -1 && value>node->right->data) 
{
return rotateLeft(node);
}

// LR
if (balance>1 && value>node->left->data) 
{
node->left=rotateLeft(node->left);

return rotateRight(node);
}

// RL
if (balance < -1 && value < node->right->data) 
{
node->right=rotateRight(node->right);
return rotateLeft(node);
}

return node;
}

// MIN
Node* findMin(Node* node) 
{
while (node->left != nullptr) 
{
node=node->left;
}
return node;
}


Node* deleteHelper(Node* node, const T& value) 
{
if (node == nullptr) 
{
return node;
}

if (value < node->data) 
{
node->left=deleteHelper(node->left, value);
}
 else if (value>node->data) 
{
node->right=deleteHelper(node->right, value);
}
else 
{
// Node to be deleted found
if (node->left == nullptr||node->right == nullptr) 
{
Node* temp;

if (node->left != nullptr)
temp=node->left;
else
temp=node->right;

if (temp == nullptr) 
{
temp=node;
node=nullptr;
}
else 
{
*node=*temp;
}
delete temp;
size--;
} 
else 
{
Node* temp=findMin(node->right);
node->data=temp->data;

node->right=deleteHelper(node->right, temp->data);
}
}

if (node == nullptr) return node;

//HEIGHT UDATATION
updateHeight(node);

// GBF
int balance=getBalance(node);

// LL
if (balance>1 && getBalance(node->left) >= 0) 
{


return rotateRight(node);
}

// LR
if (balance>1 && getBalance(node->left) < 0) 
{


node->left=rotateLeft(node->left);

return rotateRight(node);
}

// RR
if (balance<-1 && getBalance(node->right) <= 0) 
{
return rotateLeft(node);
}

// RL
if (balance < -1 && getBalance(node->right)>0) 
{
node->right=rotateRight(node->right);


    return rotateLeft(node);
}

return node;
}

// SEARCHER
Node* searchHelper(Node* node, const T& value) const 
{
if (node == nullptr||node->data == value) 
{
return node;
}

if (value < node->data) 
{
return searchHelper(node->left, value);
}
return searchHelper(node->right, value);
}

// INORDER TRAVERSAL HELPER
void inOrderHelper(Node* node, void (*visit)(const T&)) const 
{
if (node != nullptr) 
{
inOrderHelper(node->left, visit);

visit(node->data);

inOrderHelper(node->right, visit);
}
}

// PREOREDER HELPER TRAVERSAL
void preOrderHelper(Node* node, void (*visit)(const T&)) const 
{
if (node != nullptr) 
{
visit(node->data);
preOrderHelper(node->left, visit);

preOrderHelper(node->right, visit);
}
}

// POST ORDER HELPER TRAVERSAL
void postOrderHelper(Node* node, void (*visit)(const T&)) const 
{
if (node != nullptr) 
{
postOrderHelper(node->left, visit);

postOrderHelper(node->right, visit);

visit(node->data);
}
}


void clearHelper(Node* node) 
{
if (node != nullptr) 
{
clearHelper(node->left);
clearHelper(node->right);
delete node;
}
}

Node* copyHelper(Node* node) 
{
if (node == nullptr)
{
return nullptr;
}

Node* newNode=new Node(node->data);

newNode->height=node->height;

newNode->left=copyHelper(node->left);

newNode->right=copyHelper(node->right);
return newNode;
}

public:
AVLTree() 
{
root=nullptr;
size=0;
}

AVLTree(const AVLTree& other)
{
root=nullptr;  
size=0;        

root=copyHelper(other.root);

size=other.size;
}

//OVERLOADIN G=FOR COMPARISON PURPOSES
AVLTree& operator=(const AVLTree& other) 
{
if (this != &other) 
{
clear();
root=copyHelper(other.root);
size=other.size;
}
return *this;
}

~AVLTree() 
{
clear();
}

void insert(const T& value) 
{
root=insertHelper(root, value);
}


void remove(const T& value) 
{
root=deleteHelper(root, value);
}

// SEARCH FOR A VALUE
bool search(const T& value) const 
{
return searchHelper(root, value) != nullptr;
}

T* find(const T& value) 
{
Node* node=searchHelper(root, value);
if (node != nullptr)
{

return &(node->data);
}
else
{
return nullptr;
}
}

const T* find(const T& value) const 
{
Node* node=searchHelper(root, value);
if (node != nullptr)
{
return &(node->data);
}
else
{
return nullptr;
}
}

// IN ORDER
void inOrder(void (*visit)(const T&)) const 
{
inOrderHelper(root, visit);
}

// PRE ORDER
void preOrder(void (*visit)(const T&)) const 
{
preOrderHelper(root, visit);
}

// POST ORDER
void postOrder(void (*visit)(const T&)) const 
{
postOrderHelper(root, visit);
}


int getSize() const 
{
return size;
}

//EMPTY CHECK
bool isEmpty() const 
{
return root == nullptr;
}



void clear() 
{

clearHelper(root);

root=nullptr;
size=0;
}

int getTreeHeight() const 
{
return getHeight(root);
}
};
