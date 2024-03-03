#include <iostream>
using namespace std;
int main()
{

//pointer pada array dengan for

int a[4]= {76, 67, 88, 98};
int *akses_array;
akses_array = a;

for (int i=0; i<4; i++){
	cout<< *akses_array++ <<" "<<endl;
}
}
