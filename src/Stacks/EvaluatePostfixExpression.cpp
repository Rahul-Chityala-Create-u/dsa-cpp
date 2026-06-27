#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool evalPostFixNotation(string st, int size, int &result){
		stack<int> stack;
		for (int i = 0; i < size; ++i) {
			char current = st[i];
			if(isdigit(current)){
				int num = current - '0';
				stack.push(num);
			}else{
				if(stack.size() < 2)
				{
					cout << "Invalid expression at operator: " << current << endl;
				    return false;
				}
				int num1 = stack.top();
				stack.pop();
				int num2 = stack.top();
				stack.pop();
				switch (current){
				case '+':
					stack.push(num1+num2);
					break;
				case '-':
					stack.push(num2-num1);
					break;
				case '*':
					stack.push(num1*num2);
					break;
				case '/':
					stack.push(num2/num1);
					break;
				}

			}

		}

		if(stack.size() !=  1){
			return false;
		}else{
			result = stack.top();
			return true;
		}

}
int main(){
	string st = "34+5*";
	int res;
	if(evalPostFixNotation(st,st.size(),res)){
		cout<< res;
	}

}
