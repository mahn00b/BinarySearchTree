#include "BST.h"
#include <iostream>
#include "Student.h"





template <typename T>
BST<T>::BST() {
  root = NULL;//intially set root to null

}

template <typename T> 
BST<T>::~BST() { }


template <typename T>
TNode<T>* BST<T>::createNode(T val){
    
  TNode<T> * n = new TNode<T>;//create a new instance of TNode
  n -> data = val;
  return  n;//return pointer
  
}

template <typename T>
void BST<T>::inOrder(TNode<T>* x) {

  if(x != NULL)
  { 

    inOrder(x -> left);
    x -> printNode();
    std::cout<<" ";
    inOrder(x -> right);
    
  }
  
  
  
}


template <typename T>
void BST<T>::preOrder(TNode<T>* x) {

  if(x != NULL)
  { 

    
    x -> printNode();
    std::cout<<" ";
    preOrder(x -> left);
    preOrder(x -> right);
    
  }
  
  
  
}


template <typename T>
void BST<T>::postOrder(TNode<T>* x) {

  if(x != NULL)
  { 

    postOrder(x -> left);
    postOrder(x -> right);
    x -> printNode();
    std::cout<<" ";
    
    
  }
  
  
  
}




template <typename T>
TNode<T>* BST<T>::minimum(TNode<T>* x) {

  TNode<T>* temp = x;
  
  while(temp -> left != NULL)
    temp = temp -> left;
  
  return temp;
}



template <typename T>
TNode<T>* BST<T>::successor(TNode<T>* x) {

  if(x->right != NULL)
    return minimum(x -> right);
  else {
    
    TNode<T>* temp = x -> parent;
    
    while(temp != NULL && x == temp -> right)
    {
      x = temp;
      temp = temp->parent;
    }
    
    return temp;
    
  }
    
  
  
  
}

//public member functions


template <typename T>
void BST<T>::bstInsert(T val) {
  
 TNode<T>* xyz = NULL; 
 
 
 xyz = bstSearch(val);
  
 
 
 
  if(xyz == NULL){
    
  TNode<T>* nVal = createNode(val);//create a new TNode with the value;
  
  //variables to find where the new value belongs
  TNode<T> * y = NULL;
  TNode<T> * x = root; 
  
  while(x != NULL)
  {
    y = x;
    if(nVal -> data < x -> data)
      x = x -> left;
    else
      x = x ->right;
    
  }
  
  nVal ->parent = y;
  
  if (y == NULL)//sets the root to the new value if no TNode is found.
    root = nVal;
  else if (nVal -> data < y-> data)
    y -> left = nVal;
  else
    y -> right = nVal;
  
  } else
    std::cout<<"\nThis value is already in the tree!!\n";
}


template <typename T>
void BST<T>::inOrderWalk() {
  
 TNode<T>* temp = root;
  
  inOrder(temp);
  
  std::cout<<"\n";
  
}



template <typename T>
void BST<T>::preOrderWalk() {
  
 TNode<T>* temp = root;
  
  preOrder(temp);
  
  std::cout<<"\n";
  
}



template <typename T>
void BST<T>::postOrderWalk() {
  
 TNode<T>* temp = root;
  
  postOrder(temp);
  
  std::cout<<"\n";
  
}

template <typename T>
TNode<T>* BST<T>::bstSearch(T val) {
  
  
  if(root == NULL)
    return NULL;
  
  TNode<T>* temp = root;
 
  
  while( temp != NULL && temp -> data != val)
  {
    
      if(val < temp -> data){
	
	
	if(temp -> left != NULL)
	temp = temp -> left;
	else
	return NULL;

      }	else if (val > temp -> data) {
	
	if(temp -> right != NULL)
	temp = temp -> right;
	else
	 return NULL;
	


      }
      

  }
  
  
return temp;
  
  
  
}


/*
template <typename T>
TNode<T>* BST<T>::bstSearch(TNode<T> t,T val) {
  
  if(t == NULL || t -> data == val)
    return t;
  else if (val < t ->data)
    return bstSearch(t -> left, val);
  else 
    return bstSearch(t->right, val);
  
}


*/
template <typename T>
void BST<T>::bstDelete(T val) {

  TNode<T>* y = NULL;
  y = bstSearch(val);
  TNode<T>* del ; 
  TNode<T>* temp =  NULL; 
  
  if(y != NULL) {
  
  
  if( y -> left == NULL || y -> right == NULL) 
    del = y;
  else
    del = successor(y);
  
  
  if( del -> left != NULL)
   temp = del ->left;
  else
   temp = del ->right;
  
  
  
  if(temp != NULL)
    temp -> parent = del -> parent;
  
  
  
  if(del -> parent == NULL)
    root = temp;
  else if (del == del -> parent -> left)
    del -> parent -> left = temp;
  else
    del -> parent -> right = temp;
  
  
  
  if(del != y)
    y -> data = del -> data;
  
  delete del;
  
  } else
    std::cout<<"\nValue is not in tree\n";
  
}





template class BST<Student>;
template class BST<int>;