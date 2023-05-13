#include<iostream>
using namespace std;

struct Node{
        int data;
        Node *next; //Type of Node to pointer Node
};

int main(){
    Node *head = new Node; //ptr -> new builded memory
    Node *current =head; //use current to move the location
    current -> next=new Node; //create next block of memory
    current = current->next; //move current to next node

    // current ->next =NULL  //if current is last node 


    return 0;
}