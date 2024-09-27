#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev;
};

void InNodeHead(Node*& head, char newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    newNode->prev = nullptr;
    
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void Display(Node* node) {
    while (node != nullptr) {
        cout << node->data;
        node = node->next;
    }
    cout << endl;
}

void InNodeAny(Node*& prevNode, char newData) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null.\n";
        return;
    }
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    
    if (prevNode->next != nullptr) {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

void InNodeEnd(Node** head, char newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
    newNode->prev = last;
}

void DelNode(Node** head, char key) {
    Node* temp = *head;
    
    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        if (*head != nullptr) {
            (*head)->prev = nullptr;
        }
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }

    if (temp == nullptr) return;

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

int main() {
    Node* head = nullptr;

    InNodeEnd(&head, 'C');
    InNodeEnd(&head, 'P');
    InNodeEnd(&head, 'E');
    InNodeEnd(&head, '1');
    InNodeEnd(&head, '0');
    InNodeEnd(&head, '1');

    InNodeHead(head, 'G');
    InNodeAny(head->next, 'E');

    Display(head);
    DelNode(&head, 'C');
    DelNode(&head, 'P');
    
    Display(head);

    return 0;
}
