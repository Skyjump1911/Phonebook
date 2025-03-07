#include "phonebook.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

phonebook::phonebook() {

   head = NULL; 

};

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



}
void phonebook::read_from_file(const string& filename) {

  ifstream file;
  file.open(filename); 

  string first, last, phonenum;
    
    file >> first >> last >> phonenum;

  while(file) {
    

    push_back(first, last, phonenum);
    file >> first >> last >> phonenum; 
}
  cout << "works";   
}


