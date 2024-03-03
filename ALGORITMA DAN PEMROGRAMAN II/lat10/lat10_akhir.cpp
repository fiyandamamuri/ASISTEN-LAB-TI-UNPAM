#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas akhir10 - program menghitung banyaknya karakter menggunakan pointer"<<endl;
	cout<<endl;
	char nama[30];
	const char*ptr;
	
	cout<<"Input Nama : "; cin>>nama;
	ptr = nama;
	
	cout<<"Nama : "<<ptr;
	cout<<"\n banyaknya karakter: "<<strlen(ptr);
}




