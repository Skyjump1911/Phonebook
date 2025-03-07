/**
 * @file main.cpp
 * @author Noah Melton
 * @date 2025-03-06
 * @brief This is the main program for the phonebook linked list assignment. 
 * 
 * This is where the functionality of the program is tested. 
 */

#include "phonebook.h"
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;




void displayMenu();

int main() {

       displayMenu(); 

  
  return 0;
}


  void displayMenu() {

    cout << "Welcome to the UTM Phonebook! You may select one of the following options:" << endl;
    cout << "1 Read a phonebook from a file" << endl;
    cout << "2 Write the phonebook to a file" << endl;
    cout << "3 Print the phonebook " << endl;
    cout << "4 Search for a user's phone number" << endl;
    cout << "5 Reverse lookup by phone number" << endl;
    cout << "6 Add a user" << endl;
    cout << "7 Delete a user " << endl;
    cout << "8 Exit this program" << endl;

    cout << "Please enter your choice now: " << endl;


    phonebook test;

    test.push_back("James", "Smith", "731-819-5919");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138"); 
    //    test.push_front("Sarah", "Miller", "323-333-9849");

    test.write_to_file("testfile.txt");
    test.read_from_file("testfile.txt"); 
  }
