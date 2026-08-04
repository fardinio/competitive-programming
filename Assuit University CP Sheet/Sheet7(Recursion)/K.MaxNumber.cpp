#include<bits/stdc++.h>
using namespace std;
int findmax(vector<int>&num, int i){
	if(i==num.size()-1){
		return num[i];
	}
	int maxfromrest = findmax(num,i+1);
	return max(num[i],maxfromrest);
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	cout<<findmax(num,0);
	return 0;
}