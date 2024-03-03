#include<iostream>
using namespace std;

int factorial(int n) 
{    
 if (n==1) 
 {  
  return(1);  
 } 
 else 
 {  
  return (n*factorial(n-1));
 }
}
int main()
{
	cout<<"=============================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat7_1 Contoh program parameter rekursi dan factorial"<<endl;
	cout<<"=============================================================="<<endl;
   int x;    
   cout<<"mencari nilai faktorial\n";    
   cout<<"masukkan nilai x\t: ";cin>>x;    
   cout<<"nilai factorial dari "<<x<<"\t: "<<factorial(x);
}
