#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>>v1(3,vector<int>(3,7));
	vector<vector<int>>v2={
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{0,0,0},
		{10,11,12,13}
	};
	// v2.size() = number of rows
	// v2[i].size() = number of columns/elements in the i-th row
	cout<<v2.size()<<endl;
	cout<<v2[4].size()<<endl;

	return 0;
}