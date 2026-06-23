/*This is done just for practice same thing could be implemented using simple string data structure*/

#include <iostream>
#include <stack>
using namespace std;
stack<char> removeAdjDup(string str){
	stack<char> Stack;
	for (int k = 0; k < str.size(); ++k) {
		if(Stack.empty()){
			Stack.push(str[k]);
			continue;
		}
		if(Stack.top() == str[k]){
			Stack.pop();
		}else{
			Stack.push(str[k]);
		}
	}

	return Stack;
}
int main(){
	string str;

		cin>> str;
string res ="";
	stack<char> st = removeAdjDup(str);
	while(!st.empty()){
		res +=st.top();
		st.pop();
	}
	// reversing the string
	int left =0;
	int right = res.size()-1;
	while(left <= right){
		int temp = res[left];
		res[left] = res[right];
		res[right] = temp;

		left++;
		right--;
	}
	cout<<res;
}
