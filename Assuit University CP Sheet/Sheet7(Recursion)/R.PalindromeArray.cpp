#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n, int i, const vector<int>& num){
	if(i == n/2){
		return 1;
	}
	if(num[i]!=num[n-1-i]){
		return 0;
	}
	return palindrome(n,i+1,num);
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}

	if(palindrome(n,0,num)){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}