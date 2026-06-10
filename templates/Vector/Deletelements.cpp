#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<char>v={'a','b','c','d','e'};

	//deleting last element
	v.pop_back();

	//deleting element 'b'
	v.erase(find(v.begin(),v.end(),'b'));

	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}