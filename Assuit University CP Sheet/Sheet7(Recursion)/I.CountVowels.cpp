#include<bits/stdc++.h>
using namespace std;
int vowel(string s, int i){
	if(i==s.size()){
		return 0;
	}
	char ch = tolower(s[i]);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		return 1 + vowel(s, i+1);
	}
	return vowel(s, i+1);
}

int main(){
	string s;
	getline(cin,s);
	cout<<vowel(s,0)<<"\n";
	return 0;
}