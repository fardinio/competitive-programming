#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&num, int n){

	if(n<0){
		return;
	}
	if(n%2 == 0){
		cout<<num[n]<<" ";
	}
	print(num, n-1);
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	print(num, n-1);
}