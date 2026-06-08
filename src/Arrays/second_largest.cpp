#include <iostream>
using namespace std;

int findSecondLargest(int arr[],int size){
	int Lrgst = arr[0];
	int secondLrgst = arr[0];
for(int i = 1; i<size;i++){
	if(arr[i] > Lrgst ){
		secondLrgst = Lrgst;
		Lrgst = arr[i];

	}
		if(arr[i] < Lrgst && arr[i] > secondLrgst){
			secondLrgst = arr[i];
					}
	}
return secondLrgst;
}
int main(){
	int arr[5];
	for(int i = 0;i<5;i++){
		cin>> arr[i];
	}

	int outPut = findSecondLargest(arr,5);
	cout<< outPut << "is the second largest number in the array";
};
