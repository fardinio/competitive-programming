#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	int sz = s.size();
	int i=0; int e=sz-1;
	bool ok = 1;
	while(i<e){
		if(s[i]!=s[e]){
			ok = 0;
		}
		i++;
		e--;
	}
	if(ok){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}