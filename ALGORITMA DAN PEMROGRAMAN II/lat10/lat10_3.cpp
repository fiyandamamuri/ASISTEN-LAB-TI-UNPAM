#include <iostream>
using namespace std;

int main ()
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat10_3 - program contoh penggunaan pointer"<<endl;
	cout<<endl;
	
	int num[10];
	int *start, *end;
	start = num;
	end = &num[9];
	while(start != end)
	{
		cout<<"masukkan bilangan : ";
		cin >> *start;
		start++;
	}
	return 0;
}


