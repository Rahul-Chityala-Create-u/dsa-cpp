#include <iostream>
using namespace std;
void findPrefix(string arr[],int size){
	string candidate = arr[0];
	for (int i = 1; i < size; ++i) {
		int scanner = 0;
		while(scanner < arr[i].size() && scanner<candidate.size()){
			if(candidate[scanner] != arr[i][scanner]){
				candidate = arr[i].substr(0,scanner);
				break;
			}
			scanner++;
		}
		candidate = arr[i].substr(0,scanner);
	}
	cout<<candidate;
}
int main(){
	string arr[] = {"flower","flow","flight","flowering"};
	int size = sizeof(arr)/sizeof(arr[0]);
	findPrefix(arr,size);
}
