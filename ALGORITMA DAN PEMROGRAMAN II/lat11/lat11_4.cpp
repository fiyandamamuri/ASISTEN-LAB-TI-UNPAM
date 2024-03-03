#include<iostream>
#include<string>
using namespace std;
 
struct siswa{
 string nama, alamat, jk;
 int tlp;
 char tanya;
};
 
int main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat11_4 - program untuk mencatat data siswa suatu sekolah yang terdiri dari field nama, alamat, telepon, dan jenis kelamin"<<endl<<endl;
	
 siswa sw;
 
 lagi:
 cout<<"Masukan Nama : ";cin>>sw.nama;
 cout<<"Masukan Alamat : ";cin>>sw.alamat;
 cout<<"Masukan Jk : ";cin>>sw.jk;
 cout<<"Masukan Telepon : ";cin>>sw.tlp;
 
 cout<<"\n*SISWA\n";        
 cout<<"Nama\t\t: "<<sw.nama;
 cout<<"\nAlamat\t\t: "<<sw.alamat;
 cout<<"\nJenis Kelamin\t\t: "<<sw.jk;
 cout<<"\nTelepon\t\t: 0"<<sw.tlp;
 
 cout<<"\n\nMau tambah data lagi ? [Y/N]\t: ";cin>>sw.tanya;
 cout<<endl;
 
 if(sw.tanya == 'Y'){
  goto lagi;
 } else if (sw.tanya == 'N'){
  return 0;
 }
}

