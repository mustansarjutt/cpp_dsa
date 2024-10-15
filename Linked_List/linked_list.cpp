#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
    ~Node() {
        // deleting start
        if (this->next != nullptr) {
            delete next;
            next = nullptr;
        }
        cout << "Node is deleted with data " << this->data << endl;
    }
};

void insertAtHead(Node* &head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data) {
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPositon(Node* &head, Node* &tail, int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position-1) {
        temp = temp->next;
        count++;
    }
    if (temp->next == nullptr) {
        insertAtTail(tail, data);
        return;
    }
    // craeting new node
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(Node* &head, int position) {
    // deleting start node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    } else {
        // any node other than start
        Node *crr = head;
        Node *prev = nullptr;

        int count = 1;
        while (count < position) {
            prev = crr;
            crr = crr->next;
            count++;
        }

        prev->next = crr->next;
        crr->next = nullptr;
        delete crr;
    }
}
void print(Node* &head) {
    Node *temp = head;

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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // Node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    // print(head);
    insertAtTail(tail, 99);
    insertAtTail(tail, 79);
    insertAtTail(tail, 89);
    // print(head);
    insertAtPositon(head, tail, 5, 33);
    print(head);
    // cout << "Head = " << head->data << endl;
    // cout << "Tail = " << tail->data << endl;
    deleteNode(head, 3);
    print(head);
    deleteList(head);
    return 0;
}