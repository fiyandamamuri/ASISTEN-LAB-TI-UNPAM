#include <stdio.h>
#include <ctype.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_3 - contoh program string dengan islower \n\n");
	
	char c = 'C';
	if (islower(c))
	printf ("%c is lower case character \n", c);
	else printf ("%c is not lower case character \n", c);
	return 0;
}

