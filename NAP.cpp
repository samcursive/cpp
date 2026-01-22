/* Program Name: NAP.cpp
 * Program Requirement: 
 *
 * 	Write a program that has the following character varaibales, `first`, `middle`, & `last`. Store your initials in these variables then display them on the screen.
 *
 *
 * Status: Completed, December 18 2025
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
        string phone_numb
};


int main(){

  pii user;

  cout << "Please Enter your Full Name: ";
  getline(cin, user.full_name);


  cout << endl << "What is your Address? ";
  getline(cin, user.address); 

  cout << endl << "What is a good phone number to reach you at: ";
  getline(cin,  user.phone_number);

  cout << endl << "Your entered details are: \n" << user.full_name << ".\n" << user.address << ".\n" << user.phone_number << endl;


  return 0;
}
