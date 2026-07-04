#include<iostream>
#include <stack>
using namespace std;

void nxtGrtElm(int arr[],int size, int (&result)[5]){
	stack<int> stack;
	for (int i = size - 1; i >= 0; i--) {

		while(!stack.empty() && stack.top() <= arr[i]){
			stack.pop();
		}
		if(stack.empty()){
			result[i] = -1;
		}else{
			result[i] = stack.top();
		}
		stack.push(arr[i]);

	}
}
int main(){
	int arr[] = {2, 1, 2, 4, 3}; //stack = [4,2,] // res = [-1,-1,4,2,]
	int res[5] ={};
	int size = sizeof(arr)/sizeof(arr[0]);
	 nxtGrtElm(arr,size,res);

	 for (int k = 0; k < size; ++k) {
		cout<<res[k];
	}
}
