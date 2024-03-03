#include <stdio.h>

//deklarasi struct dengan nama (pelajar)
struct pelajar{
    char nama[50];
    int usia;
};

//deklarasi fungsi dengan parameter (info)
void tampilkan(struct pelajar info);

//fungsi utama mengambil inputan user dan deklarasi objek (siswa)
int main(){
    struct pelajar siswa;

    printf("Masukkan Nama : ");
    scanf("%s", siswa.nama);
    printf("Masukkan Usia : ");
    scanf("%d", &siswa.usia);

    tampilkan(siswa); //fungsi (tampilkan) mengakses objek (Siswa)

    return 0;
}

//menggunakan fungsi untuk menampilkan input dari user
void tampilkan(struct pelajar info){
    printf("\nMenampilkan Informasi\n");
    printf("Nama : %s", info.nama);
    printf("\nUsia : %d", info.usia);
}
