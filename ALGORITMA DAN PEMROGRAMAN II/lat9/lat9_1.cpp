#include <stdio.h>
#include <ctype.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_1 - contoh program string dengan isalpha \n\n");
	char c = 'C';
	
	if (isalpha (c))
	printf ("%c is alphabetical \n", c);
	else printf ("%c is not alphabrtical \n", c);
	return 0;
}
