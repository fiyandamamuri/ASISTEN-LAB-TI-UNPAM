#include <iostream>
using namespace std;

int main() {
    int data = 10;
    
    //case dengan operator reference (&)
    cout << &data << " Merupakan alamat memori dan " << endl << data << " Merupakan nilai variabelnya" << endl;
    
	//case dengan operator dereference (*)
	cout<< *&data <<" Merupakan nilai dari variabel data "<<endl;
	return 0;
}
