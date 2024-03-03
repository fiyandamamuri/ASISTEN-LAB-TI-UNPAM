#include <stdio.h>
#include <ctype.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_4 - contoh program string dengan isupper \n\n");
	
	char c = 'C';
	
	if (isupper (c))
	printf ("%c is an uppercase character \n", c);
	else printf ("%c is not an uppercase character \n", c);
	return 0;
}

