#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
 
struct S1
{
 char *s;
 int i ;
 struct S1 *slp;
};
main( )
{
	cout<<"Nama : Fiyanda Ma'muri"<<endl;
	cout<<"NIM : 211011400602"<<endl;
	cout<<"lat11_2 - program contoh penggunaan struktur "<<endl<<endl;
	
 static struct S1 a []= {
  {"abcdef", 1, a+1 },
  {"ghijkl", 2, a+2},
  {"mnopqr", 3, a}
 };
 
 struct S1 *p = a;
 int i;
 printf("a [0].s = %s p->= %s a[2].slp->s=%s\n", a[0].s, p->s, a[2].slp->s);
 cout<<endl;
 for (i=0; i<3; i++)
 {
  printf("--a[i].i = %d", --a[i].i);
  printf("++a[i].s[3] = %c\n", ++a[i].s[3]);
 }
}

