#include <iostream>
using namespace std;

class ListNode{
    private:
        int data;
        ListNode* next;
    public:
        ListNode(int data){
            this->data=data;
            next= NULL;
        }
        friend class LinkList;
};
class LinkedList{
    private :
        ListNode* first;
    public:    
        ListNode:first(0);
        int size;
        LinkedList(){
            first =NULL;
            size =0;
        }

        void insert(int data){
            ListNode* newNode =new ListNode(data);
            newNode = first;
            first = newNode;
        }
};
int main(){

}