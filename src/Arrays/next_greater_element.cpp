#include <iostream>
using namespace std;

int main(){
	int arr[] = {2, 1, 2, 4, 3};
	int res[5] ={};
	int size = sizeof(arr)/sizeof(arr[0]);
	int write = 0;
	int scanner = 1;

	while(write < size){
		if(scanner >= size){
			res[write] = -1;
			break;
		}
		if(arr[scanner] > arr[write]){
			res[write] = arr[scanner];
			write++;
			scanner = write+1;
		}else if(scanner == size-1){
			res[write] = -1;
			write++;
			scanner = write+1;
		}else{
			scanner++;
		}
	}
	for (int i = 0; i < 5; ++i) {
cout<< res[i] << ",";
	}
}
