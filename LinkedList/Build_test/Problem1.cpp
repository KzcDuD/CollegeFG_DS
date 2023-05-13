#include<iostream>
using namespace std;
//Build 10→20→30→40→50
struct Node{
    int data;
    Node *next;
    Node(){};
    Node(int x){data=x;};
};

int main(){
    Node *head=new Node();
    Node *current = head;
    current->next=new Node(10);
    current=current->next;
    current->next=new Node(20);
    current=current->next;
    current->next=new Node(30);
    current=current->next;
    current->next=new Node(40);
    current=current->next;

    current->next=NULL;

    Node *tmp =head;
    head=head->next;
    delete tmp; //delete 10
    ;

    current =head->next;
    // cout<<head->next->data<<endl;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}