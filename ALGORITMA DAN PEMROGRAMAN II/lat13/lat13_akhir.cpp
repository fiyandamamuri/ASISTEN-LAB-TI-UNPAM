#include<iostream>
#include<conio.h>
using namespace std;

int linear_search(int [], int, int);
main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"tugas akhir 13 - program pencarian data-data"<<endl<<endl;
	 const int array_size=10;
	 int array[array_size], banyak;

	 cout<<"Banyak Array\t: ";cin>>banyak;
	 cout<<endl;
	 for(int a=0; a < banyak; a++){
	 	cout<<"Input array "<<a<<"\t: ";cin>>array[a];
	 }
	 
	 cout<<"\n*ISI DARI ARRAY"<<endl;
	 cout<<"\nArray:"<<"\t\t\tData:"<<endl;
	 for (int count=0; count<banyak; count++)
	 {
		 cout<<"array["<<count<<"]"<<"\t\t";
		 cout<<array[count]<<endl;
	 }
	 int searching_element=0;
	 int flag=0;
	 cout<<"\n\n masukan data yang anda cari = ";
	 cin>>searching_element;
	 flag=linear_search(array,banyak, searching_element);
	 if(flag !=-1)
	 cout<<"\ndata tersebut ditemukan pada posisi: array[ "<<flag<<"]";
	 else
	 cout<<"\n data tersebut tidak ditemukan ";
	 getch();
	 return 0;
}

int linear_search(int array[ ], int array_size, int element)
{
	 int flag=-1;
	 for (int count =0; count<array_size; count++)
	 {
	 if(element ==array [count])
	 {
	 flag=count;
	 break;
	 }
	 }
	 return flag;
}




