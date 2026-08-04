#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	vector<vector<char>>ara(n,vector<char>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ara[i][j];
		}
	}
	int x,y; cin>>x>>y;
	x--;
	y--;
	bool ok = 1;
	for(int i=x-1; i<=x+1; i++){
		for(int j=y-1; j<=y+1; j++){
			if(i>=0 && i<n && j>=0 && j<m){
				if(i==x && j==y){
					continue;
				}
				else if(ara[i][j]=='.'){
					ok=0;
					break;
				}
			}

		}
	}
	if(ok){
		cout<<"yes\n";
	}
	else{
		cout<<"no\n";
	}
	return 0;
}