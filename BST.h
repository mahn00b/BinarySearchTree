#ifndef BST_H
#define BST_H

#include "TNode.h"


#include <stddef.h>

 


template<class T> class TNode;


template <typename T>
class BST {
  

    
  TNode<T>* root;
  
  //helper Functions:
  
  TNode<T>* createNode(T val);//helper function to create a node
  TNode<T>* successor(TNode<T>*);
  TNode<T>* minimum(TNode<T>*);
  
  
  void inOrder(TNode<T>*); 
  void preOrder(TNode<T>*); 
  void postOrder(TNode<T>*); 
  
public:
  BST();
  ~BST();
  void inOrderWalk();
  void preOrderWalk();
  void postOrderWalk();
  void bstInsert(T val);
  void bstDelete(T val);
  TNode<T>* bstSearch(T val);
  
  
  
};






#endif
