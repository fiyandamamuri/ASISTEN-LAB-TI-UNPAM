#include <iostream>
using namespace std;

// Struct dalam struct
struct Alamat {
    char jalan[40];
    char kota[20];
    char kodePos[6]; // Mengubah "pos" menjadi "kodePos" agar lebih jelas
};

struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

struct Mahasiswa {
    char nim[15];
    char nama[50];
    Alamat alamat;
    TanggalLahir tanggalLahir; // Mengubah "lahir" menjadi "tanggalLahir" agar lebih jelas
};

int main() {
    Mahasiswa mhs; // Tidak perlu menuliskan "struct" di sini karena "Mahasiswa" sudah dideklarasikan sebagai struct.
    
    // Meminta input dari pengguna
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    
    cin.ignore(); // Menghindari terjadinya bug input
    cout << "Masukkan Nama: ";
    cin >> mhs.nama;
    
    cout << "Masukkan Alamat: ";
	cin >> mhs.alamat.jalan;
    
    cout << "Masukkan Kota: ";
    cin >> mhs.alamat.kota;
    
    cout << "Masukkan Kode Pos: ";
    cin >> mhs.alamat.kodePos;
    
    cout << "Masukkan Tanggal Lahir (DD MM YYYY): ";
    cin >> mhs.tanggalLahir.tanggal >> mhs.tanggalLahir.bulan >> mhs.tanggalLahir.tahun;
    
    // Menampilkan data mahasiswa yang telah dimasukkan
    cout << "\nData Mahasiswa:\n";
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat: " << mhs.alamat.jalan << ", " << mhs.alamat.kota << ", " << mhs.alamat.kodePos << endl;
    cout << "Tanggal Lahir: " << mhs.tanggalLahir.tanggal << "/" << mhs.tanggalLahir.bulan << "/" << mhs.tanggalLahir.tahun << endl;
    
    return 0;
}
