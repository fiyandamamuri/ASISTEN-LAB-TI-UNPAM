#include <string.h>
#include <stdio.h>
int main (void)
{
	printf ("Nama : Fiyanda Ma'muri \n");
	printf ("NIM :211011400602 \n");
	printf ("lat9_6 - contoh program string dengan strcat \n\n");
	
	char destination [25];
	char blank[10]= {" "}, c[10]={"C++"}, Borland[10] = {"Borland"};
	
	strcpy (destination, Borland);
	strcat (destination, blank);
	strcat (destination, c);
	
	printf ("%s \n", destination);
	return 0;
	}
	
