#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>num(n);

	int mx = INT_MIN;
	int mxi =0;
	int mn = INT_MAX;
	int mni = 0;

	for(int i=0;i<n;i++){
		cin>>num[i];
		if(num[i]>mx){
			mx = num[i];
			mxi = i;
		}
		if(num[i]<mn){
			mn = num[i];
			mni = i;
		}
	}
	swap(num[mni], num[mxi]);
	
	for(int i =0;i<n;i++){
		cout<<num[i]<<" ";
	}
	cout<<"\n";
	return 0;
}