#include <iostream>
using namespace std;

int maxSum(int arr[],int size){
	int bestMax = arr[0];
	int currentMax = arr[0];

	for(int i = 1; i < size; i++)
	{
		currentMax = max(arr[i], currentMax + arr[i]);
		bestMax = max(bestMax, currentMax);
	}

	return bestMax;
}
int main(){
	int arr[] ={-5,-2,-8,-1};
	int size = sizeof(arr)/sizeof(arr[0]);

	int res = maxSum(arr,size);
	cout<< res;
}
