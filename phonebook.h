/**
 * @file phonebook.h
 * @author Noah Melton
 * @date 2025-03-05
 * @brief This is the header file for the linked list phonebook assignment. 
 * 
 * 
 */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>



struct entry {

  std::string first_name;
  std::string last_name;
  std::string phone_number;

  entry *next;

};

class phonebook {

  private:

  entry head;
 
  

  
  public: 


  //constructor
  phonebook();

  //methods
  void push_front(const struct& node);

  void push_back(const struct& node);

  void read_from_file(const string& filename);

  void write_to_file(const string& filename);
  
  void insert_sorted(const struct& node);

  string lookup(const string& name); 

  string reverse_lookup(const string& phonenumber);

  void print();

  void delete_user(const string& username);
}
  

};


#endif
