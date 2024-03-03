#include<stdio.h>
main ()
{
	int panjang, lebar, luas, keliling;
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat2_1 program menghitung luas dan keliling persegi panjang\n");
	printf("=========================================================================\n");
	printf("masukkan panjang : ");
	scanf("%d", &panjang);
	printf("masukkan lebar : ");
	scanf("%d", &lebar);
	luas=panjang*lebar;
	keliling=2*(panjang+lebar);
	printf("jadi luasnya adalah : %d\n", luas);
	printf("jadi kelilingnya adalah : %d\n", keliling);
	}
