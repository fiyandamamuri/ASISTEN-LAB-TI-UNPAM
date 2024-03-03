#include <stdio.h>
using namespace std;
int main()
{
	int array_a[10]={0,2,5,7,11,12,14,22,26,31};
	int awal, tengah, akhir, cari, flag=0;
	awal=0;
	akhir=9;
	printf("data yang anda cari: "); scanf("%i",&cari);
	while (awal<=akhir && flag==0)
	{
		tengah=(awal+akhir)/2;
		if(array_a[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if (array_a[tengah]<cari)
		{
			awal=tengah+1;
			printf("cari kanan\n");
		}
		else{
			akhir=tengah-1;
			printf("cari kiri\n");
		}
	}
	if(flag==1) printf("data ditemukan");
	else printf("data tidak ditemukan");
} 
