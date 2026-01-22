#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

//----------------------------
//File Handles


ifstream ReadFile;
ofstream WritePDF;

//----------------------------
//Main
int main(){

 string userInput;
 string userOutput;
// cout << "\nPlease Enter some text, press enter to move forward." << endl;
// getline(cin, userInput);


 //Write to File
// WritePDF.open("WritePDF.pdf");
// WritePDF << userInput << endl;
// WritePDF.close();


 // WFile << "Testing Whether this file works or not!\nIf this line appears back when the file is read, it does.\n" << endl;
 
 //Read From File
 
 //Open File for Reading
 ReadFile.open("WritePDF.pdf");

 //Read Data From File. just reading into ofstream objects goes into first whitespace.
 //should get full line.
 getline(ReadFile, userOutput);
 
 //Close File
 ReadFile.close();
 

 cout << userOutput << endl;
 cout << "Line Reached" << endl;

 return 0; 
 



}
