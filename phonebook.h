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



/**
 * This is the class for the linked list
 *
 * @class phonebook phonebook.h "Phonebook/phonebook.h"
 * @brief This is what holds each user's information node
 *
 */
class phonebook {

  private:

  entry  *head;
 
  

  
  public: 


  //constructor
  phonebook();

  //destructor
    ~phonebook();
  
  //methods

/**
 * This is the function that pushes a new node to the front of our linked list
 *
 * @param std::string first The first name
 * @param std::string last the last name
 * @param std::string num their phone number
 * @pre N/A
 * @return void This function just adds a new node
 * @post A new node is added
 * 
 */
  void push_front(std::string first, std::string last, std::string num);


/**
 * This function takes a node and pushes it to the end of the linked list
 *
 * @param std::string first the first name
 * @param std::string last the last name
 * @param std::string num the phone number
 * @pre N/A
 * @return void this function ensures that your node is put at the end of the linked list
 * @post The node is pushed to the end of the list
 * 
 */
  void push_back(std::string first, std::string last, std::string num);


/**
 * this function takes a file that stores info and populates a list with it
 *
 * @param const std::string& filename the file name
 * @pre This funciton requires a valid file with the proper information inside. 
 * @return void This function fills up a linked list
 * @post A linked list will be filled with the information from the file. 
 * 
 */
  void read_from_file(const std::string& filename);


/**
 * This function writes to a file using the information from a linked list. 
 *
 * @param const std::string& filename the file to be written
 * @pre This function requires a populated linked list. 
 * @return void The function performs the action of writing the contents of a list to a file. 
 * @post The file is constructed and filled with the information from the linked list. 
 * 
 */
  void write_to_file(const std::string& filename);
  

/**
 * This function takes a node, and stores it in the linked list by alphabetic order
 *
 * @param const entry& node the node to be stored. 
 * @pre You need a linked list to be able to add something to.
 * @return void This funcition only places a node in the correct order in the list. 
 * @post The node is placed according to alphabetic order. 
 * 
 */
  void insert_sorted(const entry& node);


/**
 * This function takes the information from a user and finds out who it belongs to. 
 *
 * @param const std::string& firstname the first name
 * @param const std::string& lastname the last name
 * @pre This function needs a valid first and last name in order to return the phone number of the user. 
 * @return void While this function does return ther user's info, it does so by printing the information out, not by returning some string. 
 * @post The linked list has been searched, and if there is a match, the phone number is printed. 
 * 
 */
  void lookup(const std::string& firstname, const std::string& lastname); 


/**
 * Much like the lookup function, this function finds user data. However, it takes the user's phone number and uses it to find the individual's name. 
 *
 * @param const std::string& phonenumber the phone number we are using to identify someone y
 * @pre the phone number we are using to identify someone by
 * @return void The person is found (if the exist) and their info is printed out. 
 * @post The indvidual's info is printed out. 
 * 
 */
  void reverse_lookup(const std::string& phonenumber);


/**
 * This function prints out the contents of the linked list. 
 *
 * @param const std::string& filename the name of the file which we are getting the info from. 
 * @pre We need a valid file. 
 * @return void This function prints out the contents of a linked list. 
 * @post The linked list is printed out. 
 * 
 */
  void print(const std::string& filename);


/**
 * This function deletes a user
 *
 * @param const std::string& first the first name o the user to be deleted
 * @param const std::string& last the first name of the user to be deleted
 * @pre A valid user name must be passed into this function
 * @return void The user is deleted, and nothing is returned. 
 * @post The user gets deleted from the linked list. 
 * 
 */
  void delete_user(const std::string& first, const std::string& last);
  

};


#endif
