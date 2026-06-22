#include <iostream>
#include <stack>
using namespace std;
stack<char> removeAdjDup(char arr[],int size){
	stack<char> Stack;
	for (int k = 0; k < size; ++k) {
		if(Stack.top() == arr[k]){
			Stack.pop();
		}else{
			Stack.push(arr[k]);
		}
	}

	return Stack;
}
int main(){
	char arr[5];
	for (int i = 0; i < 5; ++i) {
		cin>> arr[i];
	}
	stack<char> st = removeAdjDup(arr,5);
	while(!st.empty()){
		  cout << st.top() << " ";
		    st.pop();
	}
}
