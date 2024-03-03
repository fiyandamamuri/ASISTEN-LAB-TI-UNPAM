#include <stdio.h>
#include <conio.h>
//pendeklarasian tipe data baru struct Mahasiswa
typedef struct Mahasiswa{
	char NIM[9];
	char nama[30];
	float ipk;
};

int main()
{
	//buat variabel mhs betipe data Mahasiswa
	Mahasiswa mhs;
	//system("cls");
	printf("NIM = "); scanf("%s", mhs.NIM);
	printf("Nama = "); scanf("%s", mhs.nama);
	printf("IPK = "); scanf("%f", &mhs.ipk);
	
	printf("data anda : \n");
	printf("NIM : %s\n", mhs.NIM);
	printf("Nama : %s\n", mhs.nama);
	printf("IPK : %f\n", mhs.ipk);
	getch();
	
}
