#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct Mahasiswa
{
	char Nama[25];

};
main()
{
	printf("Nama : Fiyanda Ma'muri\n");
	printf("NIM : 211011400602\n");
	Mahasiswa Mhs;
	cout<<"Nama : ";
	cin.getline(Mhs.Nama, 25);
	cout<<"\n Nama : "<<Mhs.Nama;
	getch(); 
}
