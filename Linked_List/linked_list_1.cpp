#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a new node at the head
void insertAtHead(Node* &head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Function to insert a new node at the tail
void insertAtTail(Node* &tail, int data) {
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Function to print the list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete all nodes in the list to avoid memory leaks
void deleteList(Node* &head) {
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    head = nullptr; // Ensure the head pointer is set to nullptr after deletion
}

int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 25);
    print(head);
    insertAtHead(head, 100);
    insertAtHead(head, 7);
    print(head);
    insertAtTail(tail, 1);
    print(head);
    
    // Free all allocated memory before exiting
    deleteList(head);
    
    return 0;
}