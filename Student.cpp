#include "Student.h"

 

Student::Student() { fName = ""; lName = ""; id=0; } //intialize names to empty strings

Student::Student(int i) {fName = ""; lName = "" ; id = i;}//constructor takes a custom id

Student::~Student() { }//destructor



//setters and getters 
std::string Student::getFirstName() { return fName;}

std::string Student::getLastName() { return lName;}

int Student::getID() {return id;}


void Student::setID(int i) { id = i;}

void Student::setFirstName(std::string f) { fName = f;} 

void Student::setLastName(std::string l) { lName = l; }




//comparison operator overload

 bool Student::operator>( const Student& rhs) const {
  
      return this -> id > rhs.id;
} 	

 bool Student::operator<( const Student& rhs) const {
  
      return this -> id < rhs.id;
} 	 


 bool Student::operator>=( const Student& rhs) const {
  
      return this -> id >= rhs.id;
} 	 



 bool Student::operator<=( const Student& rhs) const {
  
      return this -> id <= rhs.id;
} 	 

 bool Student::operator==( const Student& rhs) const {
  
      return this -> id == rhs.id;
} 	 


 bool Student::operator!=( const Student& rhs) const {
  
      return this -> id != rhs.id;
} 	  