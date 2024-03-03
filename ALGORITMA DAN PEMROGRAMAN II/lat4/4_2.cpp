#include <iostream>
using namespace std;

int main()
{
	cout<<"========================================================================================================"<<endl;	
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat4_2 program menu untuk menghitung luas dan keliling segitiga, persegi panjang, dan lingkaran"<<endl;
	cout<<"========================================================================================================"<<endl;	
	char kode;
	cout<<"Masukan kode [S, P, L] : ";
	cin>>kode;
	
	switch (kode)
	{
		case'S':
			float panjanga, panjangb,alas, tinggi, kelilingsegitiga, luassegitiga;
			cout<<"MENU SEGITIGA"<<endl;
			cout<<"====menghitung luas dan keliling segitiga====="<<endl;
			cout<<endl;
			cout<<"masukkan panjang sisi A : "; cin>>panjanga;
			cout<<"masukkan panjang sisi B: "; cin>>panjangb;
			cout<<"masukkan alas : "; cin>>alas;
			cout<<"masukkan tinggi : "; cin>>tinggi;
			cout<<endl;
			kelilingsegitiga = panjanga + panjangb + alas;
			cout<<"keliling segitiga : "<<kelilingsegitiga;
			cout<<endl;
			luassegitiga=0.5*alas*tinggi;
			cout << "luas segitiga : "<<luassegitiga;
			break;
			
		case 'P':
			float panjangpp, lebarpp, luaspp, kelilingpp;
			cout<<"MENU PERSEGI PANJANG"<<endl;
			cout<<"====menghitung luas dan keliling persegi panjang===="<<endl;
			cout<<endl;
			cout<<"masukkan panjang : "; cin>>panjangpp;
			cout<<"masukan lebar : "; cin>>lebarpp;
			cout<<endl;
			luaspp=panjangpp*lebarpp;
			cout<<"luas persegi panjang : "<<luaspp;
			cout<<endl;
			kelilingpp= (2*panjangpp)+(2*lebarpp);
			cout<<"keliling persegi panjang : "<<kelilingpp;
			break;
			
		case 'L':
			float jari, kelilingl,luasl;
			cout<<"MENU LINGKARAN"<<endl;
			cout<<"====menghitung luas dan keliling lingkaran===="<<endl;
			cout<<"masukan jari jari : "; cin>>jari;
			cout<<endl;
			kelilingl= 2*3.14*jari;
			cout<<"keliling lingkaran : "<<kelilingl;
			cout<<endl;
			luasl= 3.14*jari*jari;
			cout<<"luas lingkaran: "<<luasl;
			break;
			
		default:
			cout<<("kode salah");		
	}
}

