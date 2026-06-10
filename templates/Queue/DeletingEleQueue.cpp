//Elements can only be deleted from the front of the queue using the pop() function.

#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>q;
	q.push(3);
	q.push(4);
	q.push(5);

	//Deleting elements from the front of the queue

	q.pop();

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}