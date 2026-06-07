/*
 * reverse_array.cpp
 *
 *  Created on: 06-Jun-2026
 *      Author: Rahul
 */



#include <iostream>
using namespace std;

void reverse(int arr[],int arrSize){
	int left = 0;
	int right = arrSize-1;

			while(left < right){
			int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
				left++;
				right --;
			}


}
int main (){
	int arr[] = {32,5,23,657,32,6,32};
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	reverse(arr,arrSize);
	for(int i = 0; i < arrSize; i++)
	{
	    cout << arr[i] << " ";
	}
};

