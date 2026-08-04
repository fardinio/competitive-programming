#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	while(b){
		int rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}
int lcd(int a, int b){
	return (a*b)/gcd(a,b);
}
int main(){
	int x,y; cin>>x>>y;
	cout<<gcd(x,y)<<" "<<lcd(x,y)<<"\n";
	return 0;
}