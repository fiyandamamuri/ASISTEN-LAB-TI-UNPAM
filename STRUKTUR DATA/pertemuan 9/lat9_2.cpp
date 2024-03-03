#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int Nilai[20];
    int i, j, N, L;
    int temp, U, Imin;

    cout << "Masukkan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData sebelum diurutkan: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

   U=N-1;
   for(i=0; i<=N-2; i++)
   {
   	Imin=0;
   	for(j=1; j<=U; j++)
   	{
   		if(Nilai[j]<Nilai[Imin])
   		Imin=j;
	   }
	temp=Nilai[U];
	Nilai[U]=Nilai[Imin];
	Nilai[Imin]=temp;
	cout<<endl;
	U--;
	for(L=0; L<N; L++)
	cout<<setw(3)<<Nilai[L];
   }
cout<<"\n Data setelah diurut : ";
for(i=0; i<N; i++)
cout<<setw(3)<<Nilai[i];
    getch();
    return 0;
}