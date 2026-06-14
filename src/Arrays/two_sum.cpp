#include<iostream>
#include<unordered_map>
using namespace std;
int twosum(int arr[],int size, int target){

		//mapping
	unordered_map<int,int> map;
for (int i = 0; i < size; ++i) {
	int lookFor =target -  arr[i];
	if(map.find(lookFor) != map.end()){
		cout << "Found at" << map[lookFor] << "," << i;
		return 0;
	}else{
		map[arr[i]] = i;
	}
}
	cout<< "Solution not found";
	return -1;
}
int main(){
	int arr[] = {3,2,4};
	int target = 6;
	int size = sizeof(arr)/sizeof(arr[0]);
	int res = twosum(arr,size,target);


}
