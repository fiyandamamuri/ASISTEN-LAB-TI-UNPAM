#include<stdio.h>
main()
{
	printf("============================================\n");
	printf("Nama : Fiyanda Ma'muri\n");
	printf("NIM : 211011400602\n");
	printf("lat4_1 program contoh penggunaan switch\n");
	printf("============================================\n");
	
	int kdhari;
	printf("masukkan kode hari [1-7] : ");
	scanf("%d", &kdhari);
	switch (kdhari)
	{
		case 1:
			printf("SENIN");
			break;
		case 2:
				printf("SELASA");
				break;
		case 3:
			printf("RABU");
			break;
		case 4:
			printf("KAMIS");
			break;
		case 5:
			printf("JUMAT");
			break;
		case 6:
			printf("SABTU");
			break;
		case 7:
			printf("MINGGU");
			break;
		default:
			printf("kode tidak ada");
	}
}
