#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat10_6 - program contoh penggunaan pointer"<<endl;
	cout<<endl;
	
	int x, *p, **q;
	x=10; p=&x; q=&p;
	cout<<**q;
	return 0;
}

