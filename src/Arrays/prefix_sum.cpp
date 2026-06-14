#include <iostream>
using namespace std;

int prefixSum(int arr[], int prefix[], int size){

	for (int i = 0; i < size; ++i) {
			if(i == 0){
				prefix[i] = arr[i];
			}else{
				prefix[i] = prefix[i-1] +arr[i];
			}
	}
	return 0;
}
int main(){
	int arr[] = {2,4,1,5,3};
	int size = sizeof(arr)/sizeof(arr[0]);

	int prefix[5];
	prefixSum(arr, prefix, size);
	for (int i = 0; i < size; ++i) {
		cout<< prefix[i] << " ";
	}


}
