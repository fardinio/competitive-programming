#include<bits/stdc++.h>
using namespace std;
int main(){
	int ra,ca; cin>>ra>>ca;
	vector<vector<int>>v1(ra,vector<int>(ca));
	for(int i=0;i<ra;i++){
		for(int j=0;j<ca;j++){
			cin>>v1[i][j];
		}
	}
	int rb,cb; cin>>rb>>cb;
	vector<vector<int>>v2(rb,vector<int>(cb));
	for(int i=0;i<rb;i++){
		for(int j=0;j<cb;j++){
			cin>>v2[i][j];
		}
	}
	vector<vector<int>>v3(ra,vector<int>(cb));

	for(int i=0;i<ra;i++){
		for(int j=0;j<cb;j++){
			for(int k=0; k<ca; k++){
				v3[i][j] += v1[i][k] * v2[k][j];
			}
		}
	}
	for(int i=0;i<ra;i++){
		for(int j=0;j<cb;j++){
			cout<<v3[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}