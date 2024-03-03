#include <iostream>
#include <conio.h>

using namespace std;

struct TNode {
    int data;
    TNode* next;
};

TNode* head;
TNode* tail;

void init() {
    head = NULL;
    tail = NULL;
}

int isEmpty() {
    if (tail == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void insertDepan(int databaru) {
    TNode* baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (isEmpty() == 1) {
        head = tail = baru;
        tail->next = NULL;
    } else {
        baru->next = head;
        head = baru;
    }
    cout << "Data masuk\n";
}

void tampil() {
    TNode* bantu;
    bantu = head;
    if (isEmpty() == 0) {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
    } else {
        cout << "Masih kosong\n";
    }
}

void hapusDepan() {
    TNode* hapus;
    int d;
    if (isEmpty() == 0) {
        if (head != tail) {
            hapus = head;
            d = hapus->data;
            head = head->next;
            delete hapus;
        } else {
            d = tail->data;
            head = tail = NULL;
        }
        cout << d << " terhapus";
    } else {
        cout << "Masih kosong\n";
    }
}

void clear() {
    TNode* bantu;
    TNode* hapus;
    bantu = head;
    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
    cout << "Clear\n";
}

int main() {
    int pil, databaru;
    init();
    do {
        system("cls");
        cout << endl;
        cout << "==============================================" << endl;
        cout << "========== PROGRAM LINKED LIST ===============" << endl;
        cout << "==============================================" << endl;
        cout << "1. INSERT DEPAN " << endl;
        cout << "2. DELETE DEPAN " << endl;
        cout << "3. TAMPIL DATA " << endl;
        cout << "4. CLEAR " << endl;
        cout << "5. EXIT " << endl;
        cout << "==============================================" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pil;
        switch (pil) {
            case 1:
                system("cls");
                cout << "Masukkan data = ";
                cin >> databaru;
                insertDepan(databaru);
                break;
            case 2:
                system("cls");
                hapusDepan();
                break;
            case 3:
                system("cls");
                tampil();
                break;
            case 4:
                system("cls");
                clear();
                break;
            case 5:
                return 0;
                break;
            default:
                system("cls");
                cout << "Maaf, Pilihan yang anda pilih tidak tersedia!" << endl;
                break;
        }
        getch();
    } while (pil != 7);
    return 0;
}
