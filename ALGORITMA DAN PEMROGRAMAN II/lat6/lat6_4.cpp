#include<iostream>
using namespace std;
 
int main()
{
cout<<"============================================="<<endl;
cout<<"Nama : Fiyanda Ma'muri"<<endl;
cout<<"NIM : 211011400602"<<endl;
cout<<"lat6_4 program menampilkan bilangan ganjil genap"<<endl;
cout<<"============================================="<<endl;
int batas, i;
 i = 1;
 batas = 35;
 

 cout<<"Ganjil\t: ";
 while(i <= batas){
  if(i % 2 != 0){
   cout<<i<<" ";
  }
  i++;
 }
  i = 1;
  cout<<"\nGenap\t: ";
 while(i <= batas){
  if(i % 2 == 0){
   cout<<i<<" ";

  }
  i++;
 }
}
