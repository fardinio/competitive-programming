#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s={1,2,3,4,5};

	auto it=s.find(2);
	if(it!=s.end()){
		cout<<"Element found: "<<*it<<"\n";
	}

	//Accessing element also using count
	if(s.count(2)){
		cout<<"2 exists in the set"<<"\n";
	}
	cout<<"All elements in the set are: ";
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}