#include <iostream>
using namespace std;
class ListNode{
    private:
        int data;
        ListNode* next;
    public :
        ListNode():data(0),next(0){};
        ListNode(int a):data(a),next(0){};
        friend class LinkList;
};
class LinkedList{

};

int main(){

}