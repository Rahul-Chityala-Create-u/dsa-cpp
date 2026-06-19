#include <iostream>
using namespace std;

string getNameAndReverseIt(){
string name = "";
	cin >> name;
int left = 0;
int right = name.length()-1;

while(left < right){
	char temp = name[left];
	name[left] = name[right];
	name[right] = temp;
	left++;
	right--;
}
return name;
}
int main(){
	string reversedName = getNameAndReverseIt();
	cout <<reversedName;
}
