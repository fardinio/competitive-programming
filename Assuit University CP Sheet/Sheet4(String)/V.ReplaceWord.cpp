#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	for(int i=0;i+4<s.size();i++){
		if((s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')){
			s.erase(i,5);
			s.insert(i, 1,' ');
		}
	}
	cout<<s<<"\n";
	return 0;
}