#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



class Node{
 public:
  int val;
  Node *next;


};



void printList(Node*);


int main(){
 
 Node* Head = new Node();
 Node* Second = new Node();
 Node* Third = new Node();
 Node* Fourth = new Node();

 //Link Nodes
 Head->next = Second;
 Second->next = Third;
 Third->next = Fourth;
 Fourth->next = NULL;


 cout << "Please enter values of nodes: " << endl;
 cin >>  Head->val >> Second->val >> Third->val >> Fourth->val;
 printList(Head);
  

 cout << "\n\n\n\n--------------------This line is just a test line-------------------" << endl;
 return 0;
}



void printList(Node *n){
 while (n){
  cout << "\nCurrent values in Nodes: " << n->val << endl;
  n =  n->next;
 }
}
