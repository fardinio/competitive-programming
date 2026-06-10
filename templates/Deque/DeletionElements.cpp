#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>d={10,20,30,40,50};
	cout<<"Orginal deque: ";
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<"\n";

	//Removing the last element
	d.pop_back();
	cout<<"Deque after pop_back(): ";

	for(int i: d){
		cout<<i<<" ";
	}
	cout<<"\n";

	//Removing the first element
	d.pop_front();
	cout<<"Deque after pop_front(): ";
	for(int i: d){
		cout<<i<<" ";
	}
	cout<<"\n";

	return 0;
}