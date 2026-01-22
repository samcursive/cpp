//A Nested For Loop Demonstration
/*
   Outer Loop simulates hours.
   Outer Loop simulates minutes
   Outer Loop simulates seconds.
*/

#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main(){

  cout << fixed << right;
  cout.fill('0'); 
  for (int hours = 0; hours < 24; hours++){
    for (int minutes = 0; minutes < 60; minutes++){
     for (int seconds = 0; seconds < 60; seconds++){
       cout << setw(3) << hours <<":";
       cout << setw(3) << minutes << ":";
       cout << setw(3) << seconds << endl;
      }
     }
  } 


 return 0;




}
