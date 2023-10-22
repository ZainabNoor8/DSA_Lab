#include <iostream>

using namespace std;

// Define a structure for a singly linked list node
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the linked list
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode;
    }
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to insert a node after a specific node with a given value
Node* insertAfter(Node* head, int searchValue, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    Node* current = head;
    while (current != NULL) {
        if (current->data == searchValue) {
            newNode->next = current->next;
            current->next = newNode;
            return head;
        }
        current = current->next;
    }
    cout << "Node with value " << searchValue << " not found in the list." << endl;
    return head;
}

// Function to delete a node with a specific value from the beginning of the list
Node* deleteAtBeginning(Node* head) {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to delete a node with a specific value from the end of the list
Node* deleteAtEnd(Node* head) {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return head;
    }
    if (head->next == NULL) {
        // If there's only one node in the list, delete it
        delete head;
        return NULL;
    }
    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    delete current->next;
    current->next = NULL;
    return head;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int choice;

    while (true) {
        cout << "Linked List Operations Menu" << endl;
        cout << "1. Insert at the Beginning" << endl;
        cout << "2. Insert at the End" << endl;
        cout << "3. Insert after a Node" << endl;
        cout << "4. Delete at the Beginning" << endl;
        cout << "5. Delete at the End" << endl;
        cout << "6. Display Linked List" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert: ";
                cin >> value;
                head = insertAtBeginning(head, value);
                break;
            }
            case 2: {
                int value;
                cout << "Enter value to insert: ";
                cin >> value;
                head = insertAtEnd(head, value);
                break;
            }
            case 3: {
                int searchValue, value;
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter value after which to insert: ";
                cin >> searchValue;
                head = insertAfter(head, searchValue, value);
                break;
            }
            case 4: {
                head = deleteAtBeginning(head);
                break;
            }
            case 5: {
                head = deleteAtEnd(head);
                break;
            }
            case 6:
                cout << "Linked List: ";
                displayList(head);
                break;
            case 7:
                // Clean up the memory and exit
                while (head != NULL) {
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                }
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

