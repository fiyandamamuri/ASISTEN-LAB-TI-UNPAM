#include <iostream>
using namespace std;

int main()
{
cout<<"============================================="<<endl;
cout<<"Nama : Fiyanda Ma'muri"<<endl;
cout<<"NIM : 211011400602"<<endl;
cout<<"lat5_4 program menampilkan ganjil dan genap"<<endl;
cout<<"============================================="<<endl;
	int ganjil, genap;
	cout<<"Ganjil : ";
	for (ganjil=1; ganjil<=35; ganjil++)
	{
		if(ganjil%2!=0)
		cout<<ganjil<< "  ";
	}
	cout<<endl;
	cout<<"Genap : ";
	for (genap=2; genap<=35; genap++)
	{
		if (genap%2==0)
	cout<<genap<< "  ";
	}
} 


