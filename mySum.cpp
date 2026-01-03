// Sum over an array called mySum
// Created by Sam Arshad on 12/29/25.
//


#include <iostream>
using namespace std;


const int COUNT = 12;  // must be a constant

int main() {

  //the size of an array MUST be a `constatnt` integer expression.
  float mySum[COUNT] = {100,220, 300, 0, 200, 250, 100,220, 300, 0, 200, 250};
  float sum = 0;


  //For Loop
  cout << "Currently the Sum is: " << sum << endl << endl;
  for (int i = 0; i < COUNT; i++){
    sum += mySum[i];
  }
  cout << "The sum from the `for` loop: " << sum << endl;

  cout << "Resetting the sum..." << endl;
  sum = 0;

  //While Loop
  int j = 0;
  while (j < COUNT){
    sum += mySum[j];
    j++;
  }
  cout << "The sum from the `while` loop: " << sum << endl;

  //system("pause>0"); Haven't figured this out on my MAC. Will try it on my Linux Machine later. Maybe.

  return 0;
}