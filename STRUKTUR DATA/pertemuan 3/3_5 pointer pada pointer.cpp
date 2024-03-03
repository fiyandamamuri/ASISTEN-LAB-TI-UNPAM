#include <iostream>
using namespace std;
int main()
{
	
//case pointer to pointer
int xy;

int *px; //pointer ke variabel xy
int **ppx; //pointer ke pointer

xy = 100; //isi dari variabel xy
px = &xy; //pointer px mengakses memori dari variabel xy
ppx = &px; //pointer ppx mengakses memori dari variabel px


cout<<"nilai x = "<<xy<<endl; //output dari variabel xy
cout<<"nilai px = "<<px<<endl; //output yaitu alamat dari variabel xy
cout<<"nilai ppx = "<<ppx<<endl; //output yaitu alamat dari variabel pointer px

}