#include <iostream>
using namespace std;
int main()
{

	int firstValue, secondValue;
	int *valuePointer;

valuePointer= &firstValue;
*valuePointer = 10;

valuePointer =  &secondValue;
*valuePointer = 20;


cout<<"first value = "<<firstValue<<endl;
cout<<"second value = "<<secondValue<<endl;


}