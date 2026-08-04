#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<vector<int>>num(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>> num[i][j];
		}
	}
	int mns=0;
	int scs=0;
	for(int i=0;i<n;i++){
		mns+=num[i][i];
		scs+=num[i][n-i-1];
	}
	int sum=abs(mns-scs);
	cout<<sum<<"\n";
	return 0;
}