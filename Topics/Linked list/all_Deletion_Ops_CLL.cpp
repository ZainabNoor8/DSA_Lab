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

    void deleteAtBeginning() {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }

        if (current == head) {
            // If there's only one node in the list.
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            current->next = head;
            delete temp;
        }
    }

    void deleteAtEnd() {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = NULL;
        
        while (current->next != head) {
            prev = current;
            current = current->next;
        }

        if (prev == NULL) {
            // If there's only one node in the list.
            delete head;
            head = NULL;
        } else {
            prev->next = head;
            delete current;
        }
    }

    void deleteByValue(int target) {
        if (head == NULL) {
            std::cout << "The list is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = NULL;

        while (current->data != target) {
            if (current->next == head) {
                std::cout << "Target value not found in the list. Node not deleted." << std::endl;
                return;
            }
            prev = current;
            current = current->next;
        }

        if (current == head) {
            // If the target is in the first node.
            deleteAtBeginning();
        } else {
            prev->next = current->next;
            delete current;
        }
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

    cll.deleteAtBeginning();
    std::cout << "After deleting the first node: ";
    cll.display();

    cll.deleteAtEnd();
    std::cout << "After deleting the last node: ";
    cll.display();

    cll.deleteByValue(10);
    std::cout << "After deleting the node with value 10: ";
    cll.display();

    return 0;
}

