#include<iostream>
using namespace std;

int main()
{
cout<<"============================================="<<endl;
cout<<"Nama : Fiyanda Ma'muri"<<endl;
cout<<"NIM : 211011400602"<<endl;
cout<<"tugas akhir pertemuan 5"<<endl;
cout<<"============================================="<<endl;
	int nilaiPertama, nilaiKedua, nilaiLanjutan;
	nilaiPertama= 0;
	nilaiKedua = 1;
	
	cout<<"Deret Fibonacci\t: "<<nilaiPertama<<" "<<nilaiKedua<<" ";
	
		for(int i = 2; i < 12; i++){
			nilaiLanjutan = nilaiPertama+nilaiKedua;
			
			cout<<nilaiLanjutan<<" ";
			
			nilaiPertama = nilaiKedua;
			nilaiKedua = nilaiLanjutan;
		}
}



