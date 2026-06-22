#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool checkParOrder(int size){
	stack<char> Stack;
	unordered_map<char,char> map;
	int isValid = true;
	map['}'] = '{';
	map[')'] = '(';
	map[']'] = '[';
	string pattern;
		cin>> pattern;


	for (int i = 0; i < pattern.size(); ++i) {
		if(pattern[i] == '{' || pattern[i] == '(' || pattern[i] == '['){
			Stack.push(pattern[i]);
		}else{
			//closing bracket
			if(Stack.empty()){
				isValid = false;
				break;
			}else if(Stack.top() == map[ pattern[i]]){
				Stack.pop();
			}else{
				isValid = false;
				break;
			}
		}
	}
	if(!Stack.empty())
	{
	    isValid = false;
	}
	return isValid;
}
int main(){
	bool isValidOp  = checkParOrder(6);

	if(isValidOp){
		cout<< "is Valid";
	}else{
		cout<< "Bad order";
	}
}
