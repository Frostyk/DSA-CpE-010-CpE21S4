#include <iostream>
using namespace std;

class Node {
public:    
    int data;
    Node* next;
};

void inAtHead(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    inAtHead(head, 1);
    inAtHead(head, 2);
    inAtHead(head, 3);
    printList(head);
    return 0;
}
