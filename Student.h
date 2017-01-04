#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>


using namespace std;




class Student {
  
  std::string fName, lName;//strings to store the names of the student
  
  
  int id; //integer to store id
  
public:
  
  Student();
  Student(int);
  ~Student();
  
  
  //getters
  std::string getFirstName();
  std::string getLastName();
  int getID();
  
  
  //setters
  void setFirstName(std::string);
  void setLastName(std::string);
  void setID(int);
  
  //operator overload:
  
  
 bool operator>(const Student&) const;//compares the id's of two Students
 bool operator<(const Student&) const;//compares the id's of two Students
 bool operator>=(const Student&) const;//compares the id's of two Students
 bool operator<=(const Student&) const;//compares the id's of two Students
 bool operator==(const Student&) const;//compares the id's of two Students
 bool operator!=(const Student&) const;//compares the id's of two Students


  friend ostream &operator<<( ostream &output, const Student &s ){ 
         output<<"Name:  " << s.lName << ", " << s.fName << " ID: " << s.id <<"\n";
         return output;            
      }
  
  
  
  
  
};



#endif
