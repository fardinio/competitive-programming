#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string org =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string s; cin>>s;
	if(t==1){
		for(int i=0; i<s.size(); i++){
			int idx = org.find(s[i]);
			cout<<key[idx];
		}
	}
	else{
		for(int i=0; i<s.size(); i++){
			int idx = key.find(s[i]);
			cout<<org[idx];
		}
	}
	cout<<"\n";
	return 0;
}