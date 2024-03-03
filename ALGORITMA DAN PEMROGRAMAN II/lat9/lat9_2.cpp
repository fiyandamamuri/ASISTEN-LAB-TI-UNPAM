#include <stdio.h>
#include <ctype.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_2 - contoh program string dengan isdigit \n\n");
	
	char c = 'C';
	if (isdigit(c))
	printf ("%c is a digit \n",c);
	else printf ("%c is not a digit \n", c);
	return 0;
}
