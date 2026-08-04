#include<bits/stdc++.h>
using namespace std;
bool find(long long a,long long n){
	if(a>n){
		return false;
	}
	if(a == n){
		return true;
	}
	bool first = find(a * 10 , n);
	if(first == true){
		return true;
	}
	bool second = find(a * 20 , n);
	if(second == true){
		return true;
	}
	return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		if(find(1,n)){
			cout<<"YES\n";
		}	
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}