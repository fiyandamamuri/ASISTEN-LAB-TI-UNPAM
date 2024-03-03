#include<stdio.h>
main ()
{
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat5_2 program contoh penggunaan perintah for dengan continue & break\n");
	printf("=========================================================================\n");
	int i;
	for (i=0; i<10; i++)
	{
		if (i==4)
		continue;
		printf("%d\n", i);
		if (i==6)
		break;
	}
}

