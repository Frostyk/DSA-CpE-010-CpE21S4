#include <iostream>

using namespace std;

class Node {
public:
    char value;
    Node* next;
};

void moveToFront(Node*& head, char elem) {
    if (head == NULL || head->value == elem) {
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    while (current->next != NULL && current->next->value != elem) {
        previous = current;
        current = current->next;
    }

    if (current->next == NULL) {
        cout << "Element not found in the list." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    temp->next = head;
    head = temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
    cout;
}

int main() {
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();
    Node* four = new Node();
    Node* five = new Node();

    one->value = 'a';
    two->value = 'b';
    three->value = 'c';
    four->value = 'd';
    five->value = 'e';

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    Node* head = one;

    printList(head);

    moveToFront(head, 'e');
    moveToFront(head, 'd');
    moveToFront(head, 'b');
    moveToFront(head, 'c');
    moveToFront(head, 'a');
    printList(head);

    return 0;
}
