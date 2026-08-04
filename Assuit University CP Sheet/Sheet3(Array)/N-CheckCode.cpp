#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b; cin>>a>>b;
	string s; cin>>s;
	string s1 = s;

	bool ok = 1;

	for(int i=0; i<s.size(); i++){
		if(i == a){
			if(s[i]!='-'){
				ok = 0;
			}
		}
		else{
			if(s[i] == '-'){
				ok=0;
			}
		}
	}
	if(ok){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	
	return 0;
}