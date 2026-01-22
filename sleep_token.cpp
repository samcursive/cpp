/* Program Name: NAP.cpp
 * Program Requirement: 
 *
 * 	Write a program that has the following character varaibales, `first`, `middle`, & `last`. Store your initials in these variables then display them on the screen.
 *
 *
 *
 *
 *
 * */



#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;


struct pii{
       	string full_name;
        string address;
        string phone_number;

};


int main(){

  pii user;

  cout << "Please Enter your Full Name: ";
  getline(cin, user.full_name);
  cout << endl << "What "; 




  sleep(5);
  cout << "is your Address? ";
  getline(cin, user.address); 
  //sleep(1.5);

  cout << endl << "Please Enter a good phone number to reach you at: ";
  cin >> user.phone_number;
  
  cout << endl << "Your entered details are: " << user.full_name << "." << user.address << "." << user.phone_number << endl;


  return 0;
}
