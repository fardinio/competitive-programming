#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s={1,2,3,4,5};

	//Deleting by value
	s.erase(2);

	//Deleting by iterator
	s.erase(s.begin());

	//Traversing the set
	for(int i:s){
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}