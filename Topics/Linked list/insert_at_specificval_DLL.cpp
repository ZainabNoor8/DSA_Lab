#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() {
        head = NULL;
    }
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAfterValue(int target, int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            // If the list is empty, the new node becomes the head.
            head = newNode;
        } else {
            Node* current = head;
            while (current != NULL && current->data != target) {
                current = current->next;
            }

            if (current == NULL) {
                // If the target value is not found, do nothing.
                std::cout << "Target value not found in the list." << std::endl;
                delete newNode; // Clean up the unused node.
                return;
            }

            // Insert the new node after the target node.
            newNode->next = current->next;
            newNode->prev = current;
            current->next = newNode;

            if (newNode->next != NULL) {
                newNode->next->prev = newNode;
            }
        }
    }

    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtBeginning(9);
    dll.insertAtBeginning(2);
    dll.insertAtBeginning(5);
    dll.insertAtBeginning(8);
    dll.insertAfterValue(5, 10); // Insert 10 after 5 (5 -> 10)
    dll.insertAfterValue(5, 15); // Insert 15 after 5 (5 -> 15 -> 10)

    std::cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}

