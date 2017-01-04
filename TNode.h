#ifndef TNODE_H
#define TNODE_H





#include <stddef.h>

 
template<class T> class BST;


template <class T>
class TNode {
  
  friend class BST<T>;
 
  TNode* parent;
  TNode* left;
  TNode* right;//pointers to left and right nodes
  T data;// stores data
  
public:
  TNode();//default constructer
  TNode(T val);
  ~TNode();//destructor
  void printNode();//function to print the data;
  
  
  
};


#endif
