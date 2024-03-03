#include <iostream>
using namespace std;
int main()
{
//deklarasi variabel dengan pointer
int *myPointer;

//case variabel dengan pointer
int x,y;

x=89;
y=x;

myPointer = &x;

cout<<"nilai x = "<<x<<endl;
cout<<"nilai y = "<<y<<endl;
cout<<"alamat my pointer = "<<myPointer<<endl;
cout<<"nilai my pointer = "<<*myPointer<<endl;


}