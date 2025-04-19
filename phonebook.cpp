/**
 * @file phonebook.cpp
 * @author Noah Melton
 * @date 2025-03-07
 * @brief This is the file where we implement the phonebook class's functions
 * 
 * I got some of the functions to work, however, some of them I just couldn't figure out. 
 */

#include "phonebook.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

phonebook::phonebook() {

   head = NULL; 

};


phonebook::~phonebook() {

  entry *next;
  while(head != NULL) {

    next = head->next;
    delete head;
    head = next; 

  }



}
void phonebook::push_front(string first, string last, string num) {

  entry *temp = new entry;
  temp->first_name = first;
  temp->last_name = last;
  temp->phone_number = num;

  temp->next = head; 
  
  head = temp; 

} 

void phonebook::push_back(string first, string last, string num) {

  entry *temp = new entry;
  temp->first_name = first;
  temp->last_name = last; 
  temp->phone_number = num;

  if(head == NULL){

    head = temp; 
  }
  else {


   entry *car = head;
  
   while(car->next != NULL) {

    car = car->next; 
    }

    car->next = temp; 
 
   }

}
//Justin helped a lot with this one

void phonebook::write_to_file(const string& filename){

  ofstream file;
  file.open(filename);

  entry *transfer = head;
  
  while(transfer->next != NULL){

    file << transfer->first_name;
    file << " ";
    file << transfer->last_name;
    file << endl; 
    file << transfer->phone_number;
    file << endl;

    
    transfer = transfer->next; 
        
  }
  
                                                                               
  file << transfer->first_name;
  file << " ";
  file << transfer->last_name << endl;
  file << transfer->phone_number << endl;

  file.close(); 

}

//Justin helped me with this one 
void phonebook::read_from_file(const string& filename) {

  ifstream file;
  file.open(filename); 

  string first, last, phonenum;
    
    file >> first >> last >> phonenum;

  while(file) {
    

    push_back(first, last, phonenum);
    file >> first >> last >> phonenum; 
}

  file.close(); 
}

void phonebook::lookup(const std::string& firstname, const std::string& lastname) {

  entry *car = head;

  while(car != NULL) {

    if(car->first_name == firstname && car->last_name == lastname) {

      cout << "That person's phone number is: " << car->phone_number;
      return;
    }
    car = car->next; 

    }
    
  cout << "There is no phone number associated with that person." << endl;
    return;
    
  }

    
void phonebook::reverse_lookup(const std::string& phonenum) {

  entry *newcar = head;

  while(newcar != NULL) {

    if(newcar->phone_number == phonenum){
      cout << "That person's name is: ";
      cout << newcar->first_name;
      cout << " ";
      cout << newcar->last_name; 
      return;
    }

    newcar = newcar->next; 
    }

  cout << "Sorry, there is no name associated with that phone number.";
  return; 


}

void phonebook::delete_user(const std::string& first, const std::string& last){


  entry *temp = head;
  entry *prev = nullptr;


  if(temp == NULL) {
    cout << "no users to delete";
    return; 
  }
  if(temp != NULL && temp->first_name == first && temp->last_name == last) {

    head = temp->next;
    delete temp; 
    return;
  }
  
  while(temp != NULL && (temp->first_name != first && temp->last_name != last)){
    prev = temp;
    temp = temp->next; 

}
    
  prev->next = temp->next;
  delete temp;
  cout << "user deleted"; 

  
}


void phonebook::print() {


  entry *temp = head; 
  
 if(temp == NULL) {
    cout << "Printing complete.";
    return; 
  }
  while(temp != NULL) {

    cout << endl;
    cout << temp->first_name;
    cout << " ";
    cout << temp->last_name;
    cout << endl;
    cout << temp->phone_number;
    
    temp = temp->next; 

}
   


}


