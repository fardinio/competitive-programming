#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long x; 
	cin>>s>>x;

	long long rem = 0;

	for(char c: s){
		rem= (rem*10 + (c-'0')) % x;
	}
	if(rem==0){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}