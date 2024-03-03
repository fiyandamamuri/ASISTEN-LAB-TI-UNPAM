#include <iostream>
using namespace std;

int main(){
	int jumlah;
	cout<<"========================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas akhir pertemuan 4"<<endl;
	cout<<"========================================================="<<endl;
	cout<<"Masukkan jumlah total belanja : "; cin>>jumlah;
	
	switch (jumlah)
	{
		case 100000 ... 199999:
			cout << "Anda mendapatkan DISCOUNT 5%";
			break;
			
		case 200000 ... 299999:
			cout << "Anda mendapatkan tiket ke Yogya";
			break;
		
		case 300000 ... 399999:
			cout << "Anda mendapatkan tiket ke Bali";
			break;
		
		case 400000 ... 499999:
			cout << "Anda mendapatkan jam tangan Rolex";
			break;
			
		case 500000 ... 100000000:
			cout << "Anda mendapatkan tiket ke Swiss";
			break;	
			
		default:
			cout<<"maaf anda tidak mendapatkan bonus";
	}
}


