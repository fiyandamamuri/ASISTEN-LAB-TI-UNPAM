#include<iostream>
using namespace std;

int main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 21011400602"<<endl;
	cout<<"tugas akhir 8 - program menampilkan matriks 3x3"<<endl;
	cout<<endl;
	int matriks[3][3];
	
	for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
          cout<<"Input baris "<<i+1<<" kolom "<<j+1<<"\t: ";
          cin>>matriks[i][j];
       }
    }
    
	cout<<"\nMatriks 3x3\t: ";
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
         cout<<" "<<matriks[i][j];
      }
      cout<<"\n\t\t  ";
    }
}




