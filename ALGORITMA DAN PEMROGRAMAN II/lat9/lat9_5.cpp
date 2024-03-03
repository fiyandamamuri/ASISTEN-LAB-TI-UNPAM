#include <string.h>
#include <stdio.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_5 - contoh program string dengan strcpy \n\n");
	char str1 [10] = {"abcdefghi"};
	char str2 [10];
	
	strcpy (str2, str1);
	printf ("%s\n", str2);
	return 0;
}

