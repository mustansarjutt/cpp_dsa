#include <iostream>

// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

// LinkedList class to manage the nodes
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Method to insert a new node at the end
    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Method to delete a node with a given value
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        // If head node itself holds the key
        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the key
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present
        if (temp == nullptr) return;

        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp;
    }

    // Method to print the linked list
    void printList() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destructor to clean up the memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    std::cout << "Linked List: ";
    list.printList();

    list.deleteNode(3);
    std::cout << "After deleting 3: ";
    list.printList();

    return 0;
}