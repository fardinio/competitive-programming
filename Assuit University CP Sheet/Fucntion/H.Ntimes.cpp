#include<bits/stdc++.h>
using namespace std;
void print(int n, char z){
	while(n--){
		cout<<z<<" ";
	}
	cout<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		char a; cin>>a;
		print(n,a);
	}
	return 0;
}