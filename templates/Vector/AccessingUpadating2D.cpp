#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>>v={
		{1,2,3},
		{4,5,6}
	};

	//Insert a new row
	v.push_back({7,8,9});

	//Insert element in second row
	v[1].insert(v[1].begin()+1,4);


	//Access element
	cout<<v[1][1]<<endl;

	//Update element
	v[1][0]=5;
	cout<<v.at(1).at(0);

	return 0;
}