#include<bits/stdc++.h>
using namespace std;
long long fac(int n){
	if(n==0){
		return 1;
	}
	return n * fac(n-1) ;
}
int main(){
	int n; cin>>n;
	cout<<fac(n)<<"\n";
	return 0;
}