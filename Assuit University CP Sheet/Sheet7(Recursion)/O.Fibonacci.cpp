#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
int main(){
	int n; cin>>n;
	if(n==1){
		cout<<0<<"\n";
		return 0;
	}
	else if(n==2){
		cout<<1<<"\n";
	}
	else{
		cout<<fib(n)<<"\n";
	}
}