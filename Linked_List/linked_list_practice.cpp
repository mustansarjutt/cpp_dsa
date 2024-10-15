#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int size;

    Node(int x) {
        this->data = x;
        this->next = nullptr;
        this->size++;
    }
};

int Node::size = 0;

void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void printList(Node* &head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteList(Node* &head) {
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

int main() {
    Node *node1 = new Node(1);
    Node* head = node1;

    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    printList(head);
    cout << "Size of list is " << Node::size << endl;
    deleteList(head);

    return 0;
}