#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
    string alamat;
};

int main() {
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++) {
        cout << "== Data Mahasiswa ==" << endl;
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
        cin.ignore(); // Menghindari terjadinya bug input
        cout << "Alamat: ";
        getline(cin, mhs[i].alamat);
    }
    
    return 0;
}
