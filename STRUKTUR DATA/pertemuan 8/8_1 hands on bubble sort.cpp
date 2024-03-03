#include <stdio.h>
using namespace std;

int main(){
	int arr[] = {70,60,30,50,40,20};
	int n = sizeof(arr)/sizeof(int);
	
	for(int i=1; i<n; i++){
		for (int j=n-1; j>=i; j--){
			if(arr[j-1]>arr[j]){
			int temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			}
		}
	}
	
	for (int i=0; i<n; i++){
		printf("%d", arr[ i]);
	}
	return 0;
}