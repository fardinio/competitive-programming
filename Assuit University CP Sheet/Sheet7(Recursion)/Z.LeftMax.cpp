#include<bits/stdc++.h>
using namespace std;
long long lmax = LLONG_MIN;
void leftmax(int i, int n, const vector<int>& num){
	if(i == n){
		return;
	}
	lmax = max(lmax , (long long)num[i]);
	cout<<lmax<<" ";
	leftmax(i+1, n, num);
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	leftmax(0,n,num);
	return 0;
}