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

  displayMenu();
 
  
  // populating the linked list so that we can test the write to file function. 
  test.push_back("James", "Smith", "731-819-5919");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138");
    test.push_back("John", "Cedar", "748-333-9138"); 

 

  
    int x;
    string fileName;
    string otherfileName;
    string fir;
    string las;
    string individualNum;
    string UsFirst;
    string UsLast;
    string UsPhone;
    cin >> x;


   
    switch(x){

    case 1: cout << "Enter your filename:"<< endl;
      cin >> fileName; 
      test.read_from_file(fileName);
      
      break;
    case 2: cout << "Enter the name of the file you wish to write to:" << endl;
      cin >> otherfileName;
      test.write_to_file(otherfileName); 
      break;
    case 3: cout << "I haven't finished the print function yet..." << endl;
      break;
    case 4: cout << "Enter the user's first name:" << endl;
      cin >> fir;
      cout << "Enter the user's last name:" << endl;
	cin >> las; 
	test.lookup(fir,las);
	break;
    
    case 5: cout << "Enter the phone number of the individual:";
      cin >> individualNum;
      test.reverse_lookup(individualNum);
      break;
    case 6: cout << "What is the first name of the user?";
      cin >> UsFirst;
      cout << "What is the last name if the user?";
      cin >> UsLast;
      cout << "What is the phone number of the user?";
      cin >> UsPhone;
      test.push_back(UsFirst,UsLast,UsPhone); 

      break;
    case 7: cout << "I couldn't get this one to work.";
      break;
    case 8: break; 




      
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
