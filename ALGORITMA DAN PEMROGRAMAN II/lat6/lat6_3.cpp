#include<iostream>
using namespace std;
 
int main()
{
cout<<"============================================="<<endl;
cout<<"Nama : Fiyanda Ma'muri"<<endl;
cout<<"NIM : 211011400602"<<endl;
cout<<"lat6_3 program contoh penggunaan do while"<<endl;
cout<<"program menentukan sisa bagi suatu bilangan"<<endl;
cout<<"============================================="<<endl;
    int nomer, bagi, sisa=0;    
    char chrpilihan;    
    do {      
        cout<<"masukan suatu bilangan\t\t: ";cin>>nomer;      
        cout<<"bilangan pembagi (2/3/4/5)\t: ";cin>>bagi;      
        cout<<"\nbilangan yang di pilih\t\t: "<<nomer;
        cout<<"\nbilangan pembagi\t\t: "<<bagi;      
        sisa = nomer % bagi;      
        if (sisa == 0) {          
            cout<<"\nsisa bagi\t\t\t: tidak ada\n";      
        } else {          
            cout<<"\nsisa bagi\t\t\t: "<<sisa;      
        }      
       
        cout<<"\ningin meneruskan ? (y/n)\t: ";cin>>chrpilihan;  
        cout<<endl;
    }
    while(chrpilihan == 'y');
}

