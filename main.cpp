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


/**
So, it took me forever to be able to figure out how to do the displayMenu right. I tried making it void with no args, but that of course did not work. So, I asked chatgpt how I could have a void function that would be able to recurse if the object the function was operating on was out of scope. That is where chatgpt gave me the obvious idea to just pass the object by reference. 
 **/

void displayMenu(phonebook& phonebook);

int main() {
  
  phonebook test; 

  displayMenu(test);



  return 0;
}


  void displayMenu(phonebook& phonebook) {


   


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

  
    int x;
    string usFirst;
    string usLast;
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
      phonebook.read_from_file(fileName);
      cout << endl;
      displayMenu(phonebook);       
      break;
    case 2: cout << "Enter the name of the file you wish to write to:" << endl;
      cin >> otherfileName;
      phonebook.write_to_file(otherfileName);
      cout << endl;
      displayMenu(phonebook);
      break;
    case 3:
      phonebook.print();
      cout << endl;
      displayMenu(phonebook);
      break;
    case 4: cout << "Enter the user's first name:" << endl;
      cin >> fir;
      cout << "Enter the user's last name:" << endl;
	cin >> las; 

        phonebook.lookup(fir,las);
	cout << endl;
        displayMenu(phonebook);
	
	break;
    
    case 5: cout << "Enter the phone number of the individual:";
      cin >> individualNum;
      phonebook.reverse_lookup(individualNum);
      cout << endl;
      displayMenu(phonebook);
      break;
    case 6: cout << "What is the first name of the user?";
      cin >> UsFirst;
      cout << "What is the last name if the user?";
      cin >> UsLast;
      cout << "What is the phone number of the user?";
      cin >> UsPhone;

      phonebook.push_back(UsFirst,UsLast,UsPhone); 
      cout << endl;
      displayMenu(phonebook);
      break;
    case 7: cout << "Enter the user's first name: ";
      cin >> usFirst;
      cout << "Enter the user's last name:";
      cin >> usLast;
      phonebook.delete_user(usFirst, usLast); 

      displayMenu(phonebook);
      break;
    case 8: break; 
    }


   
  }
