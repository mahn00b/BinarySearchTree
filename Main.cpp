#include "BST.h"
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


void printMenu();





int main() {
  
  
  bool quit = false, isStudent = false; 
  BST<int> bstInt;
  BST<Student> bstStudent;
  int response;
  string name;
  
  cout<< "Would you like to use BST with int(1) or Student(2)?";
  cin >> response;
  
  if(response == 2)
    isStudent = true;
  
  
  
  
  while(!quit) {
    
    
    printMenu();
    cin >> response;
    
    
    switch(response)
    {
      case 1:
	
	if(isStudent)
	{
	  
      
      cout <<"Enter Next Student ID:\n";
      cin >> response;
      
     Student y(response);
      
      cout<<"Enter Student First Name: \n";
      cin>> name;
      
      y.setFirstName(name);
      
      cout<<"Enter Student Last Name: \n";
      cin>> name;
      
      y.setLastName(name);
	  
      
      bstStudent.bstInsert(y);
     
	
	  
	} else {
	cout << endl << "Enter The Integer You Would Like to Insert: " << endl;
	cin >>response;
	bstInt.bstInsert(response);
	}
	break;
      case 2:
	if(isStudent) {
	cout << endl << "Enter The Size for the Student You Would Like to Delete: " << endl;
	cin >>response;
	Student sq(response);
	bstStudent.bstDelete(sq);
	} else {
	cout << endl << "Enter The Integer You Would Like to Delete: " << endl;
	cin >>response;
	bstInt.bstDelete(response);
	}
	break;
      case 3:
	cout << endl << "Enter The order you want to print the BST: " << endl
		     << "1.Preorder" << endl
		     << "2.Inorder" << endl
		     << "3.PostOrder" << endl;
		     
	cin >>response;
	    
	    switch(response)
	    {
	      case 1:
		if(isStudent)
		bstStudent.preOrderWalk();
		else
		bstInt.preOrderWalk();
		break;
	      case 2:
		if(isStudent)
		bstStudent.inOrderWalk();
		else
		bstInt.inOrderWalk();
		break;
	      case 3:
		if(isStudent)
		bstStudent.postOrderWalk();
		else
		bstInt.postOrderWalk();
		break;
	    }
	break;
      case 4:
	quit = true;
	break;
    } 
    
  }
  
  
  

  
  
  
  
  return 0;
}













void printMenu() {
  
cout << endl << "What would you like to do?" << endl
      <<"----------------------------" << endl
      <<"1. Insert" << endl
      <<"2. Delete" << endl
      <<"3. Print" << endl
      <<"4. Quit" <<endl;
  
  
}
