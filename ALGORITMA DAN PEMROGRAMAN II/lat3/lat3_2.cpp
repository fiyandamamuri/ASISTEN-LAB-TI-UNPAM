#include<stdio.h>
#include<string.h>
#include<conio.h>
main ()
{
	long int kode, jumlah, sks, semester;
	char nama[100];
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat3_2 program contoh penggunaan perintah IF ELSE\n");
	printf("=========================================================================\n");
	printf("kode masukkan : [1-2] : ");
	scanf("%ld", &kode);
	printf("jumlah SKS per semester [20-25]: ");
	scanf("%ld", &sks);
	if (kode==1)
	{
		strcpy(nama, "TEKNIK INFORMATIKA");
		jumlah=30000*sks;
		semester=jumlah*2;
	}
	else if (kode==2)
	{
		strcpy(nama, "AKUTANSI");
		jumlah=20000*sks;
		semester=jumlah*2;
	}
	else if (kode==1)
	{
		strcpy(nama, "MANAJEMEN");
		jumlah=15000*sks;
		semester=jumlah*2;
	}
	printf("======================================================\n");
	printf("Nama Kursus : %s\n", nama);
	printf("pembayaran dalam 1 semseter : %d\n", jumlah);
	printf("pembayaran dalam 1 tahun : %d\n", semester);
	getch();
	}
