#include<bits/stdc++.h>
using namespace std;
int main(){
	//By max-heap property
	priority_queue<int>pq;
	pq.push(30);
	pq.push(10);
	pq.push(20);
	pq.push(40);

	cout<<"Elements removed from priority queue in order: \n";

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}