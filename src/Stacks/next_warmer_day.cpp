#include <iostream>
#include <stack>
using namespace std;

int nextWarmerDay(int temps[], int size){
	stack<int> temperature_st;
	int res[size] = {};
	for(int i = size-1; i >= 0; i--){
		while(!temperature_st.empty() && temps[temperature_st.top()] <= temps[i]){
			temperature_st.pop();
		}
		if(temperature_st.empty()){
			res[i] = 0;
		}else{
			res[i] = temperature_st.top() - i;
		}

		temperature_st.push(i);
	}


	for (int k = 0; k < size; ++k) {
		cout<< res[k] << ",";
	}
	return 0;
}
int main(){
	int temperatures[] ={70, 60, 65, 80};
	int size = sizeof(temperatures)/sizeof(temperatures[0]);

	nextWarmerDay(temperatures,size);

}
