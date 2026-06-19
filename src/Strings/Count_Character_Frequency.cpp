#include <iostream>
#include <unordered_map>
using namespace std;

void getFrequency(string String){
	unordered_map<char,int> map;
	for (int i = 0; i < String.size(); ++i) {
		map[String[i]]++;

	}
	for(auto pair : map)
	{
	    cout << pair.first << " -> " << pair.second << endl;
	}

}
int main(){
	string String = "";
	cin>>String;
	getFrequency(String);
}
