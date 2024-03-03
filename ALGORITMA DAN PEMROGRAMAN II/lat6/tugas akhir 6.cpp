#include<iostream>
using namespace std;

int main()
{
cout<<"============================================="<<endl;
cout<<"Nama : Fiyanda Ma'muri"<<endl;
cout<<"NIM : 211011400602"<<endl;
cout<<"tugas akhir pertemuan 6"<<endl;
cout<<"============================================="<<endl;
	int i, nilaiPertama, nilaiKedua, nilaiLanjutan;
	nilaiPertama= 0;
	nilaiKedua = 1;
	i = 2;
	
	cout<<"Fibonacci\t: "<<nilaiPertama<<" "<<nilaiKedua<<" ";
	
		while(i < 12){
			nilaiLanjutan = nilaiPertama+nilaiKedua;
			
			cout<<nilaiLanjutan<<" ";
			
			nilaiPertama = nilaiKedua;
			nilaiKedua = nilaiLanjutan;
			
			i++;
		}
}



