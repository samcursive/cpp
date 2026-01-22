/* Program Name: Your_Name.cpp
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
using namespace std;


struct namesake{
       	char first;
        char middle;
        char last;
};


int main(){

  namesake user;

  cout << "Please Enter the Initial of your First name." << endl;
  cin >> user.first;

  cout << "Please Enter the Initial of your Middle Name." << endl;
  cin >> user.middle;

  cout << "Please Enter the Initial of your Last name." << endl;
  cin >> user.last;

  cout << endl << "Your initials are: " << user.first << "." << user.middle << "." << user.last << endl;


  return 0;
}





