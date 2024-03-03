#include <iostream>
using namespace std;

int main()
{
	cout<<"======================================================================================================================="<<endl;	
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas pendahuluan4 no 4 contoh algorithma dan program sederhana menggunakan perintah switch dengan memakai flowchart"<<endl;
	cout<<"======================================================================================================================="<<endl;	
	
	cout<<"program untuk melihat nilai akhir test"<<endl;
	int nilai;
	cout<<"masukkan hasil nilai ujian anda : "; cin>>nilai;
	switch (nilai/10)
	{
		case 10:
		case 9:
		case 8:
		cout<<'A'<<endl;
		break;
		
		case 7:
		cout<<'B'<<endl;
		break;
		
		case 6:
		case 5:
		cout<<'C'<<endl;
		
		case 4:
		case 3:
		cout<<'D'<<endl;
		break;
		
		case 2:
		case 1:
		case 0:
		cout<<'E'<<endl;
		break;
		
		default:
		cout<<"salah, nilai diluar jangkauan"<<endl;
	}
			
	}
