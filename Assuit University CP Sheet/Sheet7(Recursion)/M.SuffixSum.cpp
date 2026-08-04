#include<bits/stdc++.h>
using namespace std;
long long summation(vector<int>&num, int i){
	if(i==num.size()-1){
		return num[i];
	}
	return num[i] +  summation(num,i+1);
}
int main(){
	int n,m; cin>>n>>m;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	cout<<summation(num, n-m);
	return 0;
}