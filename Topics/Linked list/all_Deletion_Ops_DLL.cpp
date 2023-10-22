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

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void deleteAtBeginning() {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    }

    void deleteAtEnd() {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        if (head->next == NULL) {
            // If there's only one node in the list.
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        if (current->prev != NULL) {
            current->prev->next = NULL;
        }
        delete current;
    }

    void deleteByValue(int target) {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        if (head->data == target) {
            // If the target is in the first node.
            deleteAtBeginning();
            return;
        }

        Node* current = head;
        while (current != NULL && current->data != target) {
            current = current->next;
        }

        if (current == NULL) {
            std::cout << "Target value not found in the list." << std::endl;
            return;
        }

        if (current->next != NULL) {
            current->next->prev = current->prev;
        }

        if (current->prev != NULL) {
            current->prev->next = current->next;
        }

        delete current;
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
    dll.insertAtEnd(5);
    dll.insertAtEnd(10);
    dll.insertAtEnd(15);

    std::cout << "Doubly Linked List: ";
    dll.display();

    dll.deleteAtBeginning();
    std::cout << "After deleting the first node: ";
    dll.display();

    dll.deleteAtEnd();
    std::cout << "After deleting the last node: ";
    dll.display();

    dll.deleteByValue(10);
    std::cout << "After deleting the node with value 10: ";
    dll.display();

    return 0;
}

