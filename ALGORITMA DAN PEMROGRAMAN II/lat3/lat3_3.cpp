#include <iostream>
using namespace std;
int main ()
{
	int bil;
	int negatif;
	int positif;
	cout<<"================================================="<<endl;
	cout<<"Nama 	: Fiyanda Ma'muri"<<endl;
	cout<<"NIM 	: 211011400602"<<endl;
	cout<<"lat 3_3 membuat program berdasarkan algorithma"<<endl;
	cout<<"================================================="<<endl;
	cout<<"masukkan bilangan : ";
	cin>>bil;
	if (bil<0)
	{
		negatif;
		cout<<"angka " <<bil<< " adalah bilangan negatif";
	}
	else if (bil>0)
	{
		positif;
		cout<<"angka " <<bil<< " adalah bilangan positif";
	}
	else 
	{
		cout<<"angka " <<bil<< " adalah bilangan nol";
	}
	return 0;
	}
