#include<iostream>
#include<conio.h>
using namespace std;

struct alamat
{char alamat[50], kota[40],kodepos[5];};

struct data_tgl
{ int tgl,bln,thn;};                  

struct teman
{ char nama[20];
char j_kel[1];
float IPK;

struct data_tgl tgl;
struct alamat alamat;};

struct teman info;
main()
{
//input data
cout<<"Masukkan nama anda  = "<<endl;cin>>info.nama;
cout<<"Jenis kelamin anda  = "<<endl;cin>>info.j_kel;
cout<<"Tanggal lahir anda  = "<<endl;cin>>info.tgl.tgl;
cout<<"Bulan lahir anda    = "<<endl;cin>>info.tgl.bln;
cout<<"Tahun lahir anda    = "<<endl;cin>>info.tgl.thn;
cout<<"Alamat asal         = "<<endl;cin>>info.alamat.alamat;
cout<<"Kota Asal           = "<<endl;cin>>info.alamat.kota;
cout<<"Kode Pos            = "<<endl;cin>>info.alamat.kodepos;
cout<<"IPK Terakhir        = "<<endl;cin>>info.IPK;
cout<<"";
cout<<"_________________________________________________\n";
cout<<"";
//output data
cout<<"\nNama                : "<<info.nama;
cout<<"\nJenis Kelamin       : "<<info.j_kel;
cout<<"\nTanggal lahir       : "<<info.tgl.tgl<<"-"<<info.tgl.bln
<<"-"<<info.tgl.thn;
cout<<"\nAlamat              : "<<info.alamat.alamat<<"---"<<info.alamat.kota
<<"---"<<info.alamat.kodepos;
cout<<"\nIPK Terakhir        : "<<info.IPK;
cout<<"\n_______________________________________________";


getch();
}
