#include <iostream>
#define MAX 10
using namespace std;

struct Queue {
    int front, rear, data[MAX];
} Q;

bool isFull() {
    return Q.rear == MAX;
}

bool isEmpty() {
    return Q.rear == 0;
}

void printQueue() {
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        cout << "Queue: ";
        for (int i = Q.front; i < Q.rear; i++)
            cout << Q.data[i] << ((Q.rear - 1 == i) ? "" : ",");
        cout << endl;
    }
}

void enqueue() {
    if (isFull()) {
        cout << "Antrian Penuh!" << endl;
    } else {
        int data;
        cout << "Masukkan Data: ";
        cin >> data;
        Q.data[Q.rear] = data;
        Q.rear++;
        cout << "Data Ditambahkan" << endl;
        printQueue();
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian masih kosong" << endl;
    } else {
        cout << "Mengambil data" << endl << Q.data[Q.front] << "..." << endl;
        for (int i = Q.front; i < Q.rear; i++)
            Q.data[i] = Q.data[i + 1];
        Q.rear--;
        printQueue();
    }
}

int main() {
    int choose;
    do {
        cout << "=========================" << endl;
        cout << " MENU PILIHAN " << endl;
        cout << "=========================" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Keluar" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> choose;

        switch (choose) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            default:
                cout << "Pilihan tidak tersedia";
                break;
        }
    } while (choose != 3);
    return 0;
}
