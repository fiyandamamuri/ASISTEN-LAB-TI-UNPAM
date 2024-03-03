#include <iostream>
using namespace std;

//penggunaan struct
struct universitas {
    string mahasiswa;
    string kampus;
    float ipk;
    int saku;
};

int main () { 
    struct universitas data01, data02;
    data01.mahasiswa = "Fiyandamamuri";
    data01.kampus = "Universitas Pamulang";
    data01.ipk = 4.0;
    data01.saku = 50000;
    
    cout<<data01.mahasiswa<<endl;
    cout<<data01.kampus <<endl;
    cout<<data01.ipk <<endl;
    cout<<data01.saku <<endl;
    cout<<endl;
    
    cout<<"==Data Inputan Mahasiswa=="<<endl;
    cout<<"Nama : ";
    cin>>data02.mahasiswa;
    cout<<"Kampus : ";
    cin>>data02.kampus;
    cout<<"IPK : ";
    cin>>data02.ipk;
    cout<<"Saku : ";
    cin>>data02.saku;
    
    cout<<endl;
    cout<<"==Data Mahasiswa Baru=="<<endl;
    cout<<"Nama : "<<data02.mahasiswa<<endl;
    cout<<"Kampus : "<<data02.kampus<<endl;
    cout<<"IPK : "<<data02.ipk<<endl;
    cout<<"Saku : "<<data02.saku<<endl;
    
    return 0;
}
