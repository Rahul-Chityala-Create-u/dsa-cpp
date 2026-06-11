#include <iostream>
using namespace std;
int bubbleSort(int arr[],int size){
	for (int i = 0; i < size; ++i) {
		for (int k = 0; k < size-1; ++k) {
			if(arr[k] > arr[k+1] ){
				int temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
	return 0;
}
int binarySearch(int arr[], int size,int target){
	int left = 0;
	int right = size-1;

	while(left <= right){
		int center =(left+right)/2;
		if(arr[center] ==target){
			return center;
		}
		if(target > arr[center]){
			left = center+1;
		}else if(target < arr[center]){
			right = center-1;
		}
	}
return -1;
}
int main(){
	int arr[] =  {1,2,3,423,453,13,35,132,53,23,3,56,6,34,2,32,36,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	// sorting the array to implement binary search;
	bubbleSort(arr,size);
	int target = 423;
	int foundAt = binarySearch(arr,size,target);
	cout << foundAt;
}
