#include<iostream>
using namespace std;

void Genap(int a, int b)
{
	cout<<"Genap\t: ";
	while(a <= b){
		if(a % 2 == 0){
			cout<<a<<" ";
		}
		a++;
	}
}

void Ganjil(int a, int b)
{
	cout<<"\nGanjil\t: ";
	while(a <= b){
		if(a % 2 != 0){
			cout<<a<<" ";
		}
		a++;
	}
}
 
int main() 
{    
	cout<<"=============================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas akhir pertemuan 7"<<endl;
	cout<<"=============================================================="<<endl;
	int batas, i;
	i = 1;
	batas = 30;
	
	Genap(i, batas);
	
	i = 1;
	Ganjil(i, batas);
} 





