#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	int sz= s.length();
	for(int i=0;i<sz;i++){
		if(s[i]>= 'A' && s[i]<= 'Z'){
			s[i]+=32;
		}
		else if(s[i]>='a' && s[i]<='z'){
			s[i]-=32;
		}
		else if(s[i]==','){
			s[i]=' ';
		}
	}
	cout<<s<<"\n";
	return 0;
}