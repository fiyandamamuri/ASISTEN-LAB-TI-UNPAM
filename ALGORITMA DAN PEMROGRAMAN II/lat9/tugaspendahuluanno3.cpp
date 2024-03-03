#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
 
int main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"program sederhana mengcopy beberapa karakter menggunakan array"<<endl<<endl;
	
 char str1[30] = {"fiyandamamuri"};    
 char str2[30];
    strcpy (str2, str1);    
 cout<<str2;  
 return 0;
}
