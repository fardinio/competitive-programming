#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v;
	if(v.empty())
		cout<<"Vector is empty;"<<"\n";
	v.push_back(100);
	if(!v.empty())
		cout<<"Vector is not empty. First element: "<<v[0]<<"\n";
	return 0;
}