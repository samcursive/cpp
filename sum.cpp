//
// Created by Saamer Arshad on 1/11/26.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;





//calculate sum, average,
int size;
std::cout << " Enter Size: ";
std::cin >> size;
const int SIZE = 10;


int main() {



    float myArray[SIZE] = {100,220, 300,0, 200,500}, sum = 0, average = 0;

    //sum
    int i = 0; //counter
    while (i < SIZE) {
        sum += myArray[i];
        i++;
    }

    //average
    average = sum / 6;


    //Output
    cout << "Total: $ " << sum << endl;
    cout <<  "Average: $ " << average << endl;




    return 0;
}

