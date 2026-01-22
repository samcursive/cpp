#include <iostream>
#include <fstream>
#include <string>
using namespace std; 



ifstream RFile;;
ofstream WFile;

int main(){


 WFile.open("WriteFile.txt");
 WFile << "Testing Whether this file works or not!\nIf this line appears back when the file is read, it does.\n" << endl;
 WFile.close();


 RFile.open("WriteFile.txt");
 cout << "Reading from file" << endl;
 string str;
 RFile >> str;
 cout << str << endl;

 return 0; 
 



}
