#include<bits/stdc++.h>
using namespace std;
void print(int x, int n){
	if(x>n){
		return;
	}
	print(x+1, n);
	cout<<x;
	if(x!=1){
		cout<<" ";
	}
}
int main(){
	int n; cin>>n;
	print(1,n);
	return 0;
}