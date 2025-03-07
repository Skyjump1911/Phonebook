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

  entry  *head;
 
  

  
  public: 


  //constructor
  phonebook();

  //destructor
  //  ~phonebook();
  
  //methods
  void push_front(std::string first, std::string last, std::string num);

  void push_back(std::string first, std::string last, std::string num);

  void read_from_file(const std::string& filename);

  void write_to_file(const std::string& filename);
  
  void insert_sorted(const entry& node);

  void lookup(const std::string& firstname, const std::string& lastname); 

  void reverse_lookup(const std::string& phonenumber);

  void print(const std::string& filename);

  void delete_user(const std::string& first, const std::string& last);
  

};


#endif
