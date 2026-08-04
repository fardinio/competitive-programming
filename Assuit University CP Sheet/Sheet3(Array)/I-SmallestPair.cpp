#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>num(n+1);
		for(int i=1;i<=n;i++){
			cin>>num[i];
		}
		int sp=INT_MAX;
		for(int i=1;i<n;i++){
			for(int j=i+1; j<=n; j++){
				int temp = num[i]+num[j]+j-i;
				if(temp<sp){
					sp=temp;
				}
			}
		}
	cout<<sp<<"\n";
	}
	
	return 0;
}
