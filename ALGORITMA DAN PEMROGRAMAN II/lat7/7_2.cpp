#include<iostream>
using namespace std;
 
int findmax(int n1, int n2);
void printmax(int m);
 
int main()
{
	cout<<"=============================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat7_2 Contoh program implimintasi fungsi"<<endl;
	cout<<"=============================================================="<<endl;
 int i =5;    
 int j =7;    
 int k;    
 k =findmax(i,j);    
 printmax(k);
}
 
int findmax(int n1, int n2) 
{    
 if(n1 > n2) {  
  return n1;  
 } 
 else 
 {  
  return n2;  
 }
}
void printmax(int m)
{    
 cout<<"bilangan yang terbesar adalah\t: "<<m;
}
