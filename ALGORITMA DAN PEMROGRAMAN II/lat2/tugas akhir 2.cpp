#include <stdio.h>
int main ()
{
	float volume, luas, phi;
	int r;
	printf("=============================================================\n");
	printf("Nama : Fiyanda Ma'muri\n");
	printf("NIM : 211011400602\n");
	printf("TUGAS AKHIR PERTEMUAN 2\n");
	printf("=============================================================\n");
	printf("masukkan jari-jari : ");
	scanf("%d", &r);
	phi=3.14;
	volume=4*phi*r*r*r/3;
	luas=4*phi*r*r;
	printf("volume bola adalah : %f\n", volume);
	printf("luas permukaan bola adalah : %f\n", luas);
	
}
