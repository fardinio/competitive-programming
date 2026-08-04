#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		int as = a.size();
		int bs = b.size();
		int mx = max(as,bs);
		for(int i=0;i<mx;i++){
			if(i<as){
				cout<<a[i];
			}
			if(i<bs){
				cout<<b[i];
			}
		}
		cout<<"\n";
	}
	return 0;
}