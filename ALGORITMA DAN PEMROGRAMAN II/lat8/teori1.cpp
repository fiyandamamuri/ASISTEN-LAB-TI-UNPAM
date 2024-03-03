#include <stdio.h>
int main ()
{
	int square[100];
	int i;
	int k;
	
	for (i=0; i<10; i++)
	{
		k=i+1;
		square[i]=k*k;
		printf("\n pangkat dari %d adalah %d", k, square[i]);
	}
	return 0;
}

