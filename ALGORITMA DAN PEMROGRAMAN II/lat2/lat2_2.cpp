#include<stdio.h>
main ()
{
	int panjang, lebar, tinggi, luas, volume;
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat2_2 program menghitung luas dan volume balok\n");
	printf("=========================================================================\n");
	printf("masukkan panjang : ");
	scanf("%d", &panjang);
	printf("masukkan lebar : ");
	scanf("%d", &lebar);
	printf("masukkan tinggi : ");
	scanf("%d", &tinggi);
	luas=(2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar);
	volume=panjang*lebar*tinggi;
	printf("jadi luasnya adalah : %d\n", luas);
	printf("jadi volumenya adalah : %d\n", volume);
	}
