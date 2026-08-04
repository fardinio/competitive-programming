#include<bits/stdc++.h>
using namespace std;
void rightshift(int n, int x, vector<int>v){
	x = x % n;

	vector<int>ans(n);
	for(int i=0; i<n; i++){
		int index = (i+x) % n;
		ans[index] = v[i];
	}
	for(int i=0; i<n; i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	int n, x; cin>>n>>x;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	rightshift(n, x, num);
	return 0;
}