#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            newNode->next = head;
            current->next = newNode;
            head = newNode;
        }
    }

    void insertAfterValue(int target, int val) {
        if (head == NULL) {
            std::cout << "The list is empty. Cannot insert after a value." << std::endl;
            return;
        }

        Node* newNode = new Node(val);
        Node* current = head;

        do {
            if (current->data == target) {
                newNode->next = current->next;
                current->next = newNode;
                return;
            }
            current = current->next;
        } while (current != head);

        std::cout << "Target value not found in the list. Node not inserted." << std::endl;
        delete newNode;
    }

    void display() {
        if (head == NULL) {
            std::cout << "The list is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertAtEnd(5);
    cll.insertAtEnd(10);
    cll.insertAtEnd(15);

    std::cout << "Circular Linked List: ";
    cll.display();

    cll.insertAtBeginning(1);
    std::cout << "After inserting 1 at the beginning: ";
    cll.display();

    cll.insertAtEnd(20);
    std::cout << "After inserting 20 at the end: ";
    cll.display();

    cll.insertAfterValue(10, 12);
    std::cout << "After inserting 12 after 10: ";
    cll.display();

    return 0;
}

