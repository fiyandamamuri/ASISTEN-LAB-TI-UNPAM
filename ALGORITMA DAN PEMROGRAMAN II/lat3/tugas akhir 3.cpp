#include <iostream>
using namespace std;
int main()
{
	int kode;
	cout<<"================================================="<<endl;
	cout<<"Nama 	: Fiyanda Ma'muri"<<endl;
	cout<<"NIM 	: 211011400602"<<endl;
	cout<<"tugas akhir pertemuan 3"<<endl;
	cout<<"================================================="<<endl;
	cout<<"masukkan kode hari : "; cin >>kode;
	if (kode==1)
	{
		cout<<"SENIN";
	}
	else if (kode==2)
	{
		cout<<"SELASA";
	}
	else if (kode==3)
	{
		cout<<"RABU";
	}
	else if (kode==4)
	{
		cout<<"KAMIS";
	}
	else if  (kode==5)
	{
		cout<<"JUM'AT";
	}
	else if (kode==6)
	{
		cout<<"SABTU";
	}
	else if (kode==7)
	{
		cout<<"MINGGU";
	}
	else 
	{
		cout<<"kode yang anda masukkan salah";
	}
}
