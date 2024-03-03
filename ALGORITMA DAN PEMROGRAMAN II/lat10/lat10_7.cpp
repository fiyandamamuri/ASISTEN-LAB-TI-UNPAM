#include <iostream>
using namespace std;
void duplicate (int&a, int&b, int&c)
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat10_7 - program contoh penggunaan pointer"<<endl;
	cout<<endl;
	a*=2;
	b*=2;
	c*=2;
}
int main()
{
	int x=1, y=3, z=7;
	duplicate(x, y, z);
	cout<<"x = "<<x<<", y = "<<y<<", z = "<<z;
	return 0;
}

