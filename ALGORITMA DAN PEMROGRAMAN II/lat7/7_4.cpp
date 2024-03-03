#include<iostream>
using namespace std;
 
long fibonacci (long n) 
{    
 if (n==1 || n ==2) 
 {  
  return 1;
 } 
 else
{  
  return fibonacci (n-1) + fibonacci(n-2);  
 }
}
 
int main() 
{
	cout<<"=============================================================="<<endl;
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat7_4 Contoh program fungsi rekursi untuk Fibonacci"<<endl;
	cout<<"=============================================================="<<endl;
 int x;
 printf("masukkan nilai fibonacci\n");
 printf("masukkan nilai x : ");
 scanf("%d", &x);
 printf("nilai fibonacci dari %d = %d\n", x, fibonacci(x));
 
}
