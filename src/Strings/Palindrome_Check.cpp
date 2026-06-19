#include <iostream>
using namespace std;

bool getNameAndReverseIt(){
string name = "";
	cin >> name;
int left = 0;
int right = name.length()-1;

while(left < right){
	if(name[left] != name[right]){
		return false;
	}
	left++;
	right--;
}
return true;
}
int main(){
	bool isPalindrome =getNameAndReverseIt();
if(isPalindrome){
	cout << "Is Palindrome";
}else{
	cout << "Is not Palindrome";

}
}
