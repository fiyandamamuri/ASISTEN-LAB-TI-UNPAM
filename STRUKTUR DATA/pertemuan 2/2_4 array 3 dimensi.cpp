#include <iostream>
using namespace std;

int main() {
    // membuat array 3 dimensi dengan tipe data integer dan panjang berisi 3 data
    int array_3dimensi[2][2][3] = {{{100,200,300},{400,500,600},{700,800,900},{1000,1100,1200}}};
    
    // mengakses array 3 dimensi
    cout << array_3dimensi[0][1][2] << endl;
    
    return 0;
}
