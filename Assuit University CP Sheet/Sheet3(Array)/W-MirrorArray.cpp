#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	vector<vector<int>>num(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>num[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=m-1; j>=0; j--){
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}