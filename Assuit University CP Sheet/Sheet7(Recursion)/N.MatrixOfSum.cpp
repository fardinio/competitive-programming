#include<bits/stdc++.h>
using namespace std;
void addmatrix(vector<vector<int>>&a, vector<vector<int>>&b, vector<vector<int>>&res, int index, int r, int c){
	if(index == r *  c){
		return;
	}
	int row = index / c;
	int col = index % c;

	res[row][col] = a[row][col] + b[row][col];
	addmatrix(a, b, res, index+1, r, c);
}

int main(){
	int r,c;
	cin>>r>>c;

	vector<vector<int>>a(r,vector<int>(c));
	vector<vector<int>>b(r,vector<int>(c));
	vector<vector<int>>res(r,vector<int>(c));
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>b[i][j];
		}
	}

	addmatrix(a, b, res, 0, r, c);

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}