#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<char>v={'a','b','c'};

	//inserting z at the back
	v.push_back('z');

	//inserting c at index 1
	v.insert(v.begin()+1,'c');

	for(char i: v){
		cout<<i<<" ";
	}
	return 0;
}