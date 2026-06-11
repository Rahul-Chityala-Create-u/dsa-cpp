#include <iostream>
using namespace std;

void rotateArray(int arr[],int size, int rotateBy){
	int lastElm = arr[size-1];
	for(int i = size-1; i>0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = lastElm;
}
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int rotateBy = 4;
	for(int k = 0; k<rotateBy;k++){
		rotateArray(arr,size,rotateBy);
	}

	for(int i = 0; i < size; i++)
	{
	   cout << arr[i] << " ";
	}
}
