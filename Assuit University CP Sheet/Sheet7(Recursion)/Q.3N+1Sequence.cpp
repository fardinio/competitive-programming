#include<bits/stdc++.h>
using namespace std;
int ln(int n){
	if(n==1){
		return 1;
	}
	if(n%2==0){
		n/=2;
	}
	else{
		n = 3*n + 1;
	}
	return 1 + ln(n);
}
int main(){
	int n; cin>>n;
	cout<<ln(n)<<"\n";
	return 0;
}