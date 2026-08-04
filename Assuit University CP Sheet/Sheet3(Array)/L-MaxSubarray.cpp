#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>num(n);
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		for(int i=0;i<n;i++){
			int mx = num[i];
			for(int j=i; j<n; j++){
				mx = max(mx, num[j]);
				cout<<mx<<" ";
			}	
		}
		cout<<"\n";
	}
	return 0;
}