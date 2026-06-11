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
int main(){
	int arr[] = {1,324,543,2,53,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	for(int i = 0; i<size; i++){
		cout << arr[i] << " ";
	}
};
