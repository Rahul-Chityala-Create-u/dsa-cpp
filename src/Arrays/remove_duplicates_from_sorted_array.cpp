#include<iostream>
using namespace std;
int removeDupsFromSortedArr(int arr[],int size){
	int write = 0;
	int scan = 1;
	while(scan < size){
		if(arr[scan] != arr[write]){
			int temp = arr[write+1];
			arr[write+1] = arr[scan];
			arr[scan] = temp;
			write++;

		}

		scan++;
	}
return write+1;
}
int main(){
	int arr[] = {1,1,1,2,2,3,4,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int newSize = removeDupsFromSortedArr(arr,size);
	for (int i = 0; i < newSize; ++i) {
		cout<< arr[i] << " ";
	}
}
