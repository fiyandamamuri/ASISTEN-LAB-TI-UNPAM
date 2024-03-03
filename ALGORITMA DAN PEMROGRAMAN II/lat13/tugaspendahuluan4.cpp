#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 int data[50];
 int n,cari_data, posisi, awal, akhir, proses;
 bool berhenti = false;
    cout<<"Nama : Fiyanda Ma'muri"<<endl;
    cout<<"NIM : 211011400602"<<endl;
    cout<<"tugas pendahuluan 13 no 4  - program sederhana menggunakan searching"<<endl<<endl;
    
    cout<<"Input Data (maks.50) : "; cin>>n; cout<<endl;
    for(int i=0; i<n; i++)
        {
            cout<<"Data ke "<<i+1<<": "; cin>>data[i];
        }
    cout<<"\nData : ";
    for(int i = 0;i<n; i++)

 cout<<setw(3)<<data[i];
 cout<<endl<<endl;

 cout << "Data yang dicari : ";
 cin >> cari_data;

 awal = 0;
 akhir = n;
 proses = 0;

 while(berhenti != true)
 {
    proses++;
    posisi = (((cari_data-data[awal])*(akhir-awal))/(data[akhir]-data[awal])+awal);

  if(data[posisi] == cari_data)
    {
        cout << "Data " << cari_data << " pada posisi " << posisi <<endl;
        cout << "Proses pencarian sebanyak " << proses <<endl;
        berhenti = true;
    }

  else if(data[posisi] < cari_data)
    {
        awal = posisi + 1;
    }

  else
    {
        cout << "Data " << cari_data << "Tidak ditemukan.\n";
        berhenti = true;
    }
 }

    return 0;
}
