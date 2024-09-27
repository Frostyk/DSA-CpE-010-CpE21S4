#include <iostream>
using namespace std;

class Node {
public:    
    int data;
    Node* next;
};

void InNodeHead(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void Display(Node* node) {
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    InNodeHead(head, 1);
    InNodeHead(head, 2);
    InNodeHead(head, 3);
    Display(head);
    return 0;
}
