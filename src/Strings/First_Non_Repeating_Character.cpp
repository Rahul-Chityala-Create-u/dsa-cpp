#include <iostream>
#include <unordered_map>
using namespace std;
char findFirstNonRepetent(string name){
	unordered_map<char,int>map;
	for (int i = 0; i < name.size(); ++i) {
		map[name[i]]++;
	}

	for (int k = 0; k < name.size(); ++k) {
	if(map[name[k]] == 1){
		return name[k];
	}
	}
	return 0;
}
int main(){
	string name = "";
	cin >> name;
	char result = findFirstNonRepetent(name);
cout<< result <<" is the first non repeating character";
}
