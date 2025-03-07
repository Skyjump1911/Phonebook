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
    cout << "this is a test of the lookup funciton:" << endl;
    test.push_back("Angela", "Melton", "731-819-6052"); 
    cout << "Smith's Phone number is: "; 
    test.lookup("James", "Smith");
    cout << endl;
    cout << endl;
    cout << "Mom's number is: "; 
    test.lookup("Angela", "Melton");
    cout << endl;

    cout << "Another test" << endl;


    test.reverse_lookup("731-819-6052");
    cout << endl;
    test.reverse_lookup("188-1864-352");
    cout << endl;
    test.reverse_lookup("731-819-5919"); 
    test.delete_user("James", "Smith");
    test.reverse_lookup("731-819-5919");

  
  int choice;
       displayMenu(); 

       cin >> choice;

       switch(choice) {

       case 1:
	 string filename;
	 cout << "Enter the name of the file: ";
	 cin >> filename; 
	 test.read_from_file(filename);
	 break; 
       case 2:
	 string secondname;
	 cout << "Enter the name of the file: ";
	 cin >> secondname;
	 test.write_to_file(filename); 
         break; 
       }
       
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



   
  }
