#include<bits/stdc++.h>
using namespace std;
long long fac(int x){
	long long ans = 1;
	for(int i=2; i<=x; i++){
		ans*=i;
	}
	return ans;
}
long long combination(int n, int r){
	return fac(n)/(fac(r)*fac(n-r));
}
long long permutation(int n, int r){
	return fac(n)/(fac(n-r));
}
int main(){
	int a,b; cin>>a>>b;
	cout<<combination(a,b)<<" ";
	cout<<permutation(a,b)<<"\n";
	return 0;
}