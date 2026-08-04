#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin>>n>>m;
	vector<vector<int>>num(n,vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>num[i][j];
		}
	}
	int x; cin>>x;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(num[i][j]==x){
				cout<<"will not take number\n";
				return 0;
			}
		}
	}
	cout<<"will take number\n";
	return 0;
}