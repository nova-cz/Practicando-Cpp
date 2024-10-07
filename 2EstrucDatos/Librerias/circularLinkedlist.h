#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* last;

    CircularLinkedList() {
        last = nullptr;
    }

    // Function to insert a node into an empty circular singly linked list
    void insertInEmptyList(int data) {
        if (last != nullptr) {
            cout << "List is not empty." << endl;
            return;
        }

        // Create a new node
        Node* newNode = new Node(data);

        // Point newNode to itself
        newNode->next = newNode;

        // Update last to point to the new node
        last = newNode;
    }

    // Function to insert a node at the end of a circular linked list
    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (last == nullptr) {
            // If the list is empty, initialize it with the new node
            last = newNode;

            // Point to itself to form a circular structure
            newNode->next = newNode;
        } else {
            // Insert new node after the current tail
            // and update the tail pointer.
            // New node points to the head node
            newNode->next = last->next;

            // Tail node points to the new node
            last->next = newNode;

            // Update tail to be the new node
            last = newNode;
        }
    }

    // Function to delete the first node of the circular linked list
    void deleteFirstNode() {
        if (last == nullptr) {
            // If the list is empty
            cout << "List is empty" << endl;
            return;
        }

        Node* head = last->next;

        if (head == last) {
            // If there is only one node in the list
            delete head;
            last = nullptr;
        } else {
            // More than one node in the list
            last->next = head->next;
            delete head;
        }
    }

    // Function to check the first node of the circular linked list
    void checkFirstNode() {
        if (last == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        cout << "First node is: " << last->next->data << endl;
    }

    // Function to check if the list is empty
    void checkIfEmpty() {
        if (last == nullptr) {
            cout << "List is empty" << endl;
        } else {
            cout << "List is not empty" << endl;
        }
    }

    // Function to print the list
    void printList() {
        if (last == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        // Start from the head node
        Node* head = last->next;
        while (true) {
            cout << head->data << " ";
            head = head->next;
            if (head == last->next) break;
        }
        cout << endl;
    }

//******************************************************************************* */
    // Function to insert a node at the beginning of the circular linked list
    void insertAtBeginning(int value) {
        // Allocate memory for the new node and set its data
        Node* newNode = new Node(value);

        // If the list is empty, make the new node point to
        // itself and set it as last
        if (last == nullptr) {
            newNode->next = newNode;
            last = newNode;
            return;
        }

        // Insert the new node at the beginning
        newNode->next = last->next;
        last->next = newNode;
    }

    // Function to insert a node at a specific position in a circular linked list
    void insertAtPosition(int data, int pos) {
        // In case that the list is empty
        if (last == nullptr) {
            // If the list is empty
            if (pos != 1) {
                cout << "Invalid position!" << endl;
                return;
            }

            // Create a new node and make it point to itself
            Node* newNode = new Node(data);
            last = newNode;
            last->next = last;
            return;
        }

        //*In case that the list is not empty
        // Create a new node with the given data
        Node* newNode = new Node(data);

        // curr will point to head initially
        Node* curr = last->next;

        if (pos == 1) {
            // Insert at the beginning
            newNode->next = curr;
            last->next = newNode;
            return;
        }

        // Traverse the list to find the insertion point
        for (int i = 1; i < pos - 1; ++i) {
            curr = curr->next;

            // If position is out of bounds
            if (curr == last->next) {
                cout << "Invalid position!" << endl;
                return;
            }
        }

        // Insert the new node at the desired position
        newNode->next = curr->next;
        curr->next = newNode;

        // Update last if the new node is inserted at the end
        if (curr == last) {
            last = newNode;
        }
    }

    // Function to delete a specific node in the circular linked list
    void deleteSpecificNode(int key) {
        if (last == nullptr) {
            // If the list is empty
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        Node* curr = last->next;
        Node* prev = last;

        // If the node to be deleted is the only node in the list
        if (curr == last && curr->data == key) {
            delete curr;
            last = nullptr;
            return;
        }

        // If the node to be deleted is the first node
        if (curr->data == key) {
            last->next = curr->next;
            delete curr;
            return;
        }

        // Traverse the list to find the node to be deleted
        while (curr != last && curr->data != key) {
            prev = curr;
            curr = curr->next;
        }

        // If the node to be deleted is found
        if (curr->data == key) {
            prev->next = curr->next;
            if (curr == last) {
                last = prev;
            }
            delete curr;
        } else {
            // If the node to be deleted is not found
            cout << "Node with data " << key << " not found." << endl;
        }
    }

    // Function to delete the last node in the circular linked list
    void deleteLastNode() {
        if (last == nullptr) {
            // If the list is empty
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        Node* head = last->next;

        // If there is only one node in the list
        if (head == last) {
            delete last;
            last = nullptr;
            return;
        }

        // Traverse the list to find the second last node
        Node* curr = head;
        while (curr->next != last) {
            curr = curr->next;
        }

        // Update the second last node's next pointer
        // to point to head
        curr->next = head;
        delete last;
        last = curr;
    }
};