#include<iostream>
using namespace std;
 
void tukar(int x, int y);
int main()
{
	cout<<"=============================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat7_3 Contoh program parameter formal dan actual"<<endl;
	cout<<"=============================================================="<<endl;
 int a, b;    
 a=99;    
 b=11;    
 cout<<"nilai sebelum pemanggilan fungsi\t: ";    
 cout<<"nilai  a = "<<a<<" nilai b = "<<b;    
 tukar(a,b);    
 cout<<"\nnilai sesudah pemanggilan fungsi\t: ";    
 cout<<"nilai  a = "<<a<<" nilai b = "<<b;
}
 
void tukar (int px, int py) 
{    
 int z;    
 z=px;    
 px=py;    
 py=z;    
 cout<<"\nnilai diakhir fungsi\t\t\t: ";    
 cout<<"nilai  px = "<<px<<" nilai py = "<<py;
}
