#include <iostream>
using namespace std;

class Node {
public:
	char data;
	Node* next;
};

void InNodeHead(Node*& head, char newData) {
	Node* newNode = new Node; // 1. Allocate memory for the new node
	newNode->data = newData;  // 2. Put our data into the new node
	newNode->next = head;    // 3. Set Next of the new node to point to the previous Head
	head = newNode;          // 4. Reset Head to point to the new node
}


void Display(Node* node) {
	while (node != NULL) {
		cout << node->data;
		node = node->next;
	}
	cout << endl;
}

void InNodeAny(Node*& prevNode, char newData) {
	if (prevNode == NULL) { // 1. Check if it is the head node (previous node is null)
		cout << "Previous node cannot be null.\n"; // 2. If null, print "Previous node cannot be null."
		return;
	}
	Node* newNode = new Node; // 3. Allocate a new node
	newNode->data = newData;  // 4. Store data in the new node
	newNode->next = prevNode->next; // 5. Point new node to the node previous node was pointing to
	prevNode->next = newNode; // 6. Point previous node to the new node
}


void InNodeEnd(Node** head, char newData) {
	Node* newNode = new Node; // 1. Allocate new node
	newNode->data = newData;  // 3. Store data in new node
	newNode->next = nullptr;  // 4. Point next of new node to NULL

	if (*head == nullptr) {   // 2. Dereference to the head node
		*head = newNode;
		return;
	}

	Node* last = *head;
	while (last->next != nullptr) { // 5. Traverse the list until next of the node is null
		last = last->next;
	}
	last->next = newNode; // 6. Point the next of the current node to the new node
}


void DelNode(Node** head, char key) {
	Node* temp = *head;
	Node* prev = nullptr;

	if (temp != nullptr && temp->data == key) { // 1. Find previous node of the node to be deleted.
		*head = temp->next; // 2. Change the next of previous node.
		delete temp; // 3. Free memory for the node to be deleted.
		return;
	}

	while (temp != nullptr && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == nullptr) return;

	prev->next = temp->next; // 2. Change the next of previous node.
	delete temp; // 3. Free memory for the node to be deleted.
}

int main() {
	Node *head = NULL;
	Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *last = NULL;
    //step 2
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;
    last = new Node;
    head->data = 'C';
    head->next = second;
    second->data = 'P';
    second->next = third;
    third->data = 'E';
    third->next = fourth;
    fourth->data = '1';
    fourth->next = fifth;
    fifth->data = '0';
    fifth->next = last;
//step 4
    last->data = '1';
    last->next = nullptr;

	InNodeHead(head, 'G');
	
	InNodeAny(second, 'E');
	Display(head);
	DelNode(&head,'C');
	DelNode(&head,'P');
	Display(head);
	return 0;
}
