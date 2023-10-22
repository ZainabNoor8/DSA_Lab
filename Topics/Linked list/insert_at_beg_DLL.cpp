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
    dll.insertAtBeginning(5);
    dll.insertAtBeginning(10);
    dll.insertAtBeginning(15);

    std::cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}

