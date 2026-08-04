#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	vector<int>num(26,0);
	for(int i=0;i<s.size();i++){
		int x = s[i]-'a';
		num[x]++;
	}
	for(int i=0;i<26;i++){
		if(num[i]>0){
			cout<<char('a'+i) <<" : "<<num[i]<<"\n";
		}
	}
	return 0;
}