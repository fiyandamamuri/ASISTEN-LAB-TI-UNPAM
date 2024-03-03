#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;

    for (i = 0; i < 6; i++) {
        min = i;

        for (j = i + 1; j < 7; j++) {
            if (data[j] < data[min]) {
                min = j;
            }
        }

        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void binarySearch() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;

    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        
        if (data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if (data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (b_flag == 1) {
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\nData tidak ditemukan" << endl;
    }
}

int main() {
    cout << "\tBINARY SEARCH" << endl;
    cout << "\t=============" << endl;
    cout << "\nData sebelum diurutkan: ";

    for (int x = 0; x < 7; x++) {
        cout << setw(3) << data[x];
    }
    cout << endl;

    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;

    selection_sort();

    cout << "\nData setelah diurutkan: ";
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << data[x];
    }
    cout << endl;

    binarySearch();

    getch();
    return 0;
}
