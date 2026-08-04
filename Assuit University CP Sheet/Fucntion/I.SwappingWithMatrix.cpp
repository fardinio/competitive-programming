#include<bits/stdc++.h>
using namespace std;
void reveprint(vector<vector<int>>v, int x, int y){
	x--;
	y--;
	for(int i=0;i<v.size();i++){
		int temp = v[x][i];
		v[x][i] = v[y][i];
		v[y][i] = temp;
	}
	for(int i=0;i<v.size();i++){
		int temp = v[i][x];
		v[i][x] = v[i][y];
		v[i][y] = temp;
	}
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v.size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int n,x,y; cin>>n>>x>>y;
	vector<vector<int>>v(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	reveprint(v,x,y);
}