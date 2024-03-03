#include<iostream>
#include<string>
using namespace std;

struct karyawan{
	int i = 0, j = 0, jumlahKaryawan, jumlahAnak[2];
	string nama[30], status[20];
	int gaji[100];	
};

int main(){
	karyawan kr;
	
	cout<<"==============================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas akhir 11 - program mencatat data karyawan"<<endl;
	cout<<"\n==============================================="<<endl;
	
	
	cout<<"Jumlah Karyawan\t: ";cin>>kr.jumlahKaryawan;
	
	while(kr.i < kr.jumlahKaryawan){
		cout<<"Nama\t\t: ";cin>>kr.nama[kr.i];
		cout<<"Gaji/bulan\t: ";cin>>kr.gaji[kr.i];
		cout<<"Status (single/menikah)\t\t: ";cin>>kr.status[kr.i];
		if(kr.status[kr.i] == "menikah"){
			cout<<"Anak\t\t: ";cin>>kr.jumlahAnak[kr.i];
		}else if(kr.status[kr.i] == "single"){
			kr.jumlahAnak[kr.i] = 0;
		}
		kr.i++;
		cout<<"-----------------------------------------------";
		cout<<endl;
	}
	
	cout<<"Nama\tGaji/bulan\tStatus\tJumlah Anak\n";
	cout<<"-----------------------------------------------\n";
	while(kr.j < kr.jumlahKaryawan){
		cout<<kr.nama[kr.j]<<"\t"<<kr.gaji[kr.j]<<"\t\t"<<kr.status[kr.j]<<"\t"<<kr.jumlahAnak[kr.j];
		kr.j++;
		cout<<endl;
	}
}



