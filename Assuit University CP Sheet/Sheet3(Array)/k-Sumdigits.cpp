#include<bits/stdc++.h>
using namespace std;
int main(){
	int x; cin>>x;
	string n; cin>>n;
	long long sum = 0;
	for(int i=0;i<x;i++){
		sum+= n[i]-'0';
	}
	cout<<sum<<"\n";
	return 0;
}