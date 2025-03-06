/**
 * @file phonebook.h
 * @author Noah Melton
 * @date 2025-03-05
 * @brief This is the header file for the linked list phonebook assignment. 
 * 
 * 
 */



#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class entry {

 private:
  string first_name;
  string last_name;
  string phone_number;


  //constructor
 public:
  entry();

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

  

};
