#include <iostream>

using namespace std;

// Node class for holding data and a pointer to the next node
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// LinkedList class for managing the list
class LinkedList {
public:
    Node* head;
    int size;

    LinkedList() {
        head = NULL;
        size = 0;
    }

    // Insert a new node at the beginning of the list
    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    // Delete the first occurrence of a node with the given data
    void remove(int data) {
        Node* currNode = head;
        Node* prevNode = NULL;

        while (currNode != NULL) {
            if (currNode->data == data) {
                if (prevNode == NULL) {
                    head = currNode->next;
                } else {
                    prevNode->next = currNode->next;
                }

                delete currNode;
                size--;
                return;
            }

            prevNode = currNode;
            currNode = currNode->next;
        }
    }

    // Print the contents of the list
    void print() {
        Node* currNode = head;

        while (currNode != NULL) {
            cout << currNode->data << " ";
            currNode = currNode->next;
        }

        cout << endl;
    }
};

// Example usage
int main() {
    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);

    list.print(); // Outputs "3 2 1"

    list.remove(2);

    list.print(); // Outputs "3 1"

    return 0;
}
