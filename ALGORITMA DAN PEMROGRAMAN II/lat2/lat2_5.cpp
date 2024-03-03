#include<stdio.h>
main ()
{
	long int beli, disc, total;
	printf("=========================================================================\n");
	printf("Nama 	: Fiyanda Ma'muri\n");
	printf("NIM 	: 211011400602\n");
	printf("lat2_5 program contoh penggunaan operator hubungan\n");
	printf("=========================================================================\n");
	printf("masukkan pembelian : ");
	scanf("%ld", &beli);
	if (beli>=100000)
	{
		disc=0.1*beli;
		total=beli-disc;
	}
	printf("jadi pembelian adalah : %ld\n", beli);
	printf("jadi discount adalah : %ld\n", disc);
	printf("jadi total pembayaran adalah : %ld\n", total);
	
}
