#include <iostream>
using namespace std;

int main() {
    int arr[50], st, mid, end, i, num, tgt;

    cout << "Menentukan Ukuran Array : " << endl;
    cin >> num;

    cout << "Masukkan nilai dalam Array baik urutan naik atau turun : " << endl;

    for (i = 0; i < num; i++) {
        cin >> arr[i];
    }

    cout << "Tentukan nilai yang dicari dari Array yang diurutkan: ";
    cin >> tgt;

    st = 0;
    end = num - 1;

    while (st <= end) {
        mid = (st + end) / 2;

        if (arr[mid] == tgt) {
            cout << "Element ditemukan dalam Indeks " << mid << endl;
            return 0;
        } else if (tgt > arr[mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Element tidak ditemukan" << endl;
    return 0;
}
