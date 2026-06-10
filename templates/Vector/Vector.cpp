#include<bits/stdc++.h>
using namespace std;
int main(){
	//declares an empty vector
	vector<int>v1;

	//declares vector with given size
	//and fills it with a value
	vector<int>v2(3,5);

	for(int x: v2){
		cout<<x<<" ";
	}
	cout<<endl;

	//initializes vector using
	//initiazer list
	vector<int>v3= {1,2,3};

	for(int x: v3){
		cout<<x<<" ";
	}
	return 0;

}