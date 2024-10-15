#include <iostream>
using namespace std;

class Node {
public:
    static int size;
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        size++;
    }
};

int Node::size = 0;

void insertAtHead(Node* &head, int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node* &tail, int data) {
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    int endInd = Node::size + 1;
    if (position > endInd) {
        cout << "Select the position between 1 and " << endInd << endl;
        return;
    }
    if (position == 1) {
        insertAtHead(head, data);
        cout << "Inserted!" << endl;
        return;
    }
    if (position == endInd) {
        insertAtTail(tail, data);
        cout << "Inserted!" << endl;
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position-1) {
        temp = temp->next;
        count++;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    cout << "Inserted!" << endl;
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
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    head = nullptr;
    Node::size = 0;
}
void deleteNode(Node* &head, int position) {
    int endInd = Node::size;
    if (position <= 0 || position > endInd) {
        cout << "Select position between 1 and " << endInd+1 << endl;
        return;
    }
    if (position == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted" << endl;
    } else {
        Node *crr = head;
        Node *pre = nullptr;

        int count = 1;
        while (count < position) {
            pre = crr;
            crr = crr->next;
            count++;
        }
        pre->next = crr->next;
        crr->next = nullptr;
        delete crr;
        cout << "Node deleted" << endl;
    }
    Node::size--;
}
void menu() {
    cout << "-------------------------" << endl;
    cout << "1. create first node" << endl;
    cout << "2. insert at head of list" << endl;
    cout << "3. insert at the tail of list" << endl;
    cout << "4. insert at position" << endl;
    cout << "5. print the list" << endl;
    cout << "6. check the size of list" << endl;
    cout << "7. delete the list" << endl;
    cout << "8. to delete the node" << endl;
    cout << "9. quit the program" << endl;
    cout << "-------------------------" << endl;
    cout << "Enter your choice: ";
}
void intro() {
    cout << "=====================" << endl;
    cout << "Student Info:" << endl;
    cout << "Mustansar Hussain" << endl;
    cout << "BS-IT 3rd smester 2M" << endl;
    cout << "DSA Linked List Lab" << endl;
    cout << "=====================" << endl;
}
int main() {
    int choice, num1, num;
    Node *head = nullptr, *tail = nullptr;
    bool isCreated1st = false, isDeleted = false;

    intro();
    while (true) {
        menu();
        cin >> choice;
        if (choice == 9) {
            break;
        }
        switch(choice) {
            case 1:
                if (!isCreated1st) {
                    cout << "Enter the number for first node: ";
                    cin >> num1;
                    Node *node1 = new Node(num1);
                    head = node1;
                    tail = node1;
                    isCreated1st = true;
                } else {
                    cout << "First node is already created" << endl;
                }
                break;
            case 2:
                if (isCreated1st) {
                    cout << "Enter the number: ";
                    cin >> num;
                    insertAtHead(head, num);
                    cout << "Inserted!" << endl;
                } else {
                    cout << "To insert at head, 1st create node" << endl;
                }
                break;
            case 3:
                if (isCreated1st) {
                    cout << "Enter the number: ";
                    cin >> num;
                    insertAtTail(tail, num);
                    cout << "Inserted!" << endl;
                } else {
                    cout << "To insert at tail, create node" << endl;
                }
                break;
            case 4:
                if (isCreated1st) {
                    int position;
                    cout << "Enter the number: ";
                    cin >> num;
                    cout << "Enter the position: ";
                    cin >> position;
                    insertAtPosition(head, tail, position, num);
                } else {
                    cout << "To insert, create node" << endl;
                }
                break;
            case 5:
                if (isCreated1st) {
                    cout << "Elements are: ";
                    print(head);
                } else {
                    cout << "List is not created yet" << endl;
                }
                break;
            case 6:
                cout << "The size of list is " << Node::size << endl;
                break;
            case 7:
                if (isCreated1st) {
                    if (!isDeleted) {
                        deleteList(head);
                        cout << "List is deleted" << endl;
                        isCreated1st = false;
                        isDeleted = true;
                    } else {
                        cout << "List is already deleted" << endl;
                    }
                } else {
                    cout << "List is not created yet" << endl;
                }
                break;
            case 8:
                if (isCreated1st) {
                    int position;
                    cout << "Enter the position of node to be deleted: ";
                    cin >> position;
                    deleteNode(head, position);
                } else {
                    cout << "List is not created yet" << endl;
                }
                break;
            default:
                cout << "Enter valid choice" << endl;

        }
    }
    if (!isDeleted && isCreated1st) {
        deleteList(head);
    }
    
    return 0;
}