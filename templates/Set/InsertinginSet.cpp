#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s={2,3,4,5,6};

	s.insert(1);

	for(int i:s){
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}