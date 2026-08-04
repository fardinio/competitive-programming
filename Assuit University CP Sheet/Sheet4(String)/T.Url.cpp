#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; getline(cin,s);
	int i = 0;
	while(s[i]!='?'){
		i++;
	}
	i++;
	while(i<s.size()){
		if(s[i]!='=' && s[i]!='&'){
			cout<<s[i];
		}
		else if(s[i]=='='){
			cout<<": ";
		}
		else if(s[i]=='&'){
			cout<<"\n";
		}
		i++;
	}
	return 0;
}