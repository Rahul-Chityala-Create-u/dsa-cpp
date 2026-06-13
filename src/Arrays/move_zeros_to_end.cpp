#include<iostream>
using namespace std;

int moveZerosToEnd(int arr[],int size){
	int write = 0;
	int scan = 0;
	while(scan < size){
		if(arr[scan]!= 0){
			if(arr[write] == 0){
				arr[write]= arr[scan];
				arr[scan]= 0;
				write++;
			}
			scan++;
		}else{
			if(arr[write] == 0 && arr[scan] == 0){
				scan++;
				continue;
			}
			write = scan;
			scan++;
		}

	}

	return 0;
}
int main(){
	int arr[] = {0,1};//{0,0,1,0,2,0,3};//{1,2,3,4};//{1,0,2,0,3,0,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	moveZerosToEnd(arr,size);
	for(int i = 0; i<size;i++){
		cout <<arr[i] << " ";
	}

};
