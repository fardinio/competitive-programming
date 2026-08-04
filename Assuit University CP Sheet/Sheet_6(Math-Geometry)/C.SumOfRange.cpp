#include<bits/stdc++.h>
using namespace std;
long long totalsum(long long n){
	return n*(n+1)/2;
}
long long evensum(long long n){
	long long k = n/2;
	return k*(k+1);
}
long long oddsum(long long n){
	long long k = (n+1)/2;
	return k*k;
}
int main(){
	long long a, b; cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	long long sum = totalsum(b)-totalsum(a-1);
	long long esum = evensum(b)-evensum(a-1);
	long long osum = oddsum(b)-oddsum(a-1);

	cout<<sum<<"\n";
	cout<<esum<<"\n";
	cout<<osum<<"\n";
	return 0;
}