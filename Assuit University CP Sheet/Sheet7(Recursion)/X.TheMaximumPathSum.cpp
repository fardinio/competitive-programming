#include<bits/stdc++.h>
using namespace std;
long long maxsum(int i, int j, int n, int m, const vector<vector<int>>& num){
	long long right = LLONG_MIN;
	long long down = LLONG_MIN;

	if(i==n-1 && j==m-1){
		return num[i][j];
	}
	if(j<m-1){
		right = maxsum(i,j+1,n,m,num);
	}
	if(i<n-1){
		down = maxsum(i+1,j,n,m,num);
	}
	
	return num[i][j] + max(right, down);
}
int main(){
	int n, m; cin>>n>>m;
	vector<vector<int>>num(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>num[i][j];
		}
	}
	cout<<maxsum(0, 0, n,m,num)<<"\n";
}