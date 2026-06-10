//A stack cannot be directly traversed,but by creating a copy and repeatedly accessing and popping the top element, we can traverse it without modifying the original stack.//

#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	//creating a copy
	stack<int>temp(st);

	while(!temp.empty()){
		cout<<temp.top()<<"\n";
		temp.pop();
	}
	return 0;
}