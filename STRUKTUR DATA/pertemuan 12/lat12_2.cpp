#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    void enQueue();
    void deQueue();
    void displayQueue();
    void menu();
};

void Queue::enQueue() {
    int elem;
    cout << "Enter the element to be inserted into the queue: ";
    cin >> elem;

    Node* pointer = new Node;
    pointer->data = elem;
    pointer->next = nullptr;

    if (head == nullptr) {
        head = pointer;
    } else {
        tail->next = pointer;
    }

    tail = pointer;
    cout << "Element has been inserted into the queue!" << endl;
}

void Queue::deQueue() {
    if (head == nullptr) {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Element has been removed from the queue!" << endl;
}

void Queue::displayQueue() {
    if (head == nullptr) {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* pointer = head;
    cout << "Elements of the queue:" << endl;
    while (pointer != nullptr) {
        cout << pointer->data << endl;
        pointer = pointer->next;
    }

    cout << "End" << endl;
}

void Queue::menu() {
    int choice;
    while (true) {
        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enQueue();
                break;
            case 2:
                deQueue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                return;
            default:
                cout << "Enter choice (1-4)" << endl;
                break;
        }
    }
}

int main() {
    Queue frank;
    frank.menu();

    return 0;
}
