#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int sz = s.size();
		bool ok =0;
		for(int i=0;i<sz-2;i++){
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' || s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
				ok=1;
			}
		}
		if(ok){
			cout<<"Good\n";
		}
		else{
			cout<<"Bad\n";
		}
	}
	return 0;
}