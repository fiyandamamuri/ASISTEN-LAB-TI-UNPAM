#include <stdio.h>
main ()
{
	printf("Nama : Fiyanda Ma'muri \n");
	printf("NIM : 211011400602 \n");
	printf("lat8_2 - program contoh penggunaan Array \n\n");
	int square [100];
	int i, k;
	for (i=0; i<10; i++)
	{
		k=i+1;
		square [i] = k*k;

		printf ("\n pangkat dari %d adalah %d", k, square [i]);
	}
	return 0;
}
