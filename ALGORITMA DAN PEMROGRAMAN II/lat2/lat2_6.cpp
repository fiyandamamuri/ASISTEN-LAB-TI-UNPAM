#include<stdio.h>
main ()
{
	int nilai, tugas;
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat2_6 program contoh penggunaan operator logika\n");
	printf("=========================================================================\n");
	printf("masukkan sebuah nilai : ");
	scanf("%d", &nilai);
	printf("masukkan nilai tugas : ");
	scanf("%d", &tugas);
	if (nilai>70&&tugas>=75)
	printf("LULUS\n");
	else
	printf("TIDAK LULUS\n");
}
