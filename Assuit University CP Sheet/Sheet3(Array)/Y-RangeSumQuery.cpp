#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, q; cin>>n>>q;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	while(q--){
		int a,b; cin>>a>>b;
		int sum=0;
		for(int i=a-1; i<=b-1; i++){
			sum+=num[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}