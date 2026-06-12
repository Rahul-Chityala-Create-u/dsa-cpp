#include<iostream>
using namespace std;
bool checkIfSorted(int arr[],int size){
	for(int i = 0; i< size-1; i++){
		if(arr[i] > arr[i+1]){
			return false;
		}
	}
	return true;
}
int main(){
	int arr[]={1,3,5,22,34};
	int size = sizeof(arr)/sizeof(arr[0]);
	bool isSorted = checkIfSorted(arr,size);
		if(isSorted){
			cout<< "Array is sorted";
		}else{
			cout<< "Array is not sorted";
		}
};
