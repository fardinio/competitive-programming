#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int count =0;
	int i =0;
	while(i<s.size()){
		if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
			count++;
			while(i<s.size() && ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))){
				i++;
			}
		}
		else{
			i++;
		}
	}
	cout<<count<<"\n";
	return 0;
}