#include<bits/stdc++.h>
using namespace std;
void shiftzero(int n, vector<int>num){
	vector<int>ans;
	int count = 0;
	for(int i=0;i<n;i++){
		if(num[i]!=0){
			ans.push_back(num[i]);
		}
		else{
			count++;
		}
	}
	for(int i=0;i<count; i++){
		ans.push_back(0);
	}
	for(int i=0; i<n; i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	shiftzero(n,v);
	return 0;
}