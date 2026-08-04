#include<bits/stdc++.h>
using namespace std;
void binary(int n){
	if(n==0){
		return;
	}
	int x = n%2;
	binary(n/2);
	cout<<x;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		binary(n);
		cout<<"\n";
	}
	return 0;
}