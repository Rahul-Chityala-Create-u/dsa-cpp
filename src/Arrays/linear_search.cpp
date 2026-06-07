#include <iostream>
using namespace std;

int linearSearch(int arr[],int  size, int target){

		for(int i = 0; i<=size;i++){
			if(arr[i] == target){
//				cout << "Found at " << i ;
				return i;
			}

		}
		return -1;
}
int main(){
	int arr[] = {32,5,23,657,32,6,32};
			int target = 322;
			int arraySize = sizeof(arr) / sizeof(arr[0]);
			int index = linearSearch(arr,arraySize,target);
			if(index != -1)
				cout<< "found at" << index;
			else

				cout<< "not found in the provided array";

};
