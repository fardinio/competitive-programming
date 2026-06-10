#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>q;
	q.push(3);
	q.push(4);
	q.push(5);

	queue<int>temp(q);
	while(!temp.empty()){
		cout<<temp.front()<<" ";
		temp.pop();
	}
	return 0;

}