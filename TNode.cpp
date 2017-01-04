#include "Student.h" 
#include "TNode.h"
#include <iostream>

template <typename T>
TNode<T>::TNode() { left = NULL; right = NULL; parent = NULL; data = T();}

template <typename T>
TNode<T>::TNode(T val) { left = NULL; right = NULL; parent = NULL; data = val; }

 

template <typename T>
TNode<T>::~TNode() { }

template <typename T> 
void TNode<T>::printNode() { std::cout << data;}



template class TNode<int>; 
template class TNode<Student>;