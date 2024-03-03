#include <stdio.h>
using namespace std;
int main()
{
	int variabel_integer;
	int *pointer_integer;
	
	pointer_integer = &variabel_integer;
	*pointer_integer = 17;
}

