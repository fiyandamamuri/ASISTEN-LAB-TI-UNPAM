#include <iostream>
using namespace std;

int main()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat10_2 - program contoh penggunaan pointer"<<endl;
	cout<<endl;
	
	int *ptr, num;
	ptr = & num;
	*ptr = 100;
	cout<<num<<" ";
	(*ptr)++;
	cout<<num<<"\n";
	return 0;
}

