#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>st;
	st.push(10);
	st.push(5);

	//Accessing top element
	cout<<"Top element: "<<st.top()<<"\n";

	//Popping an element
	st.pop();
	cout<<"Top element after pop: "<<st.top()<<"\n";

	return 0;
}