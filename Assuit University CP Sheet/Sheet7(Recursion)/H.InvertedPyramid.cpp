#include<bits/stdc++.h>
using namespace std;
void space(int i){
	if(i==0){
		return;
	}
	cout<<" ";
	space(i-1);
}
void print(int i){
	if(i==0){
		return;
	}
	cout<<'*';
	print(i-1);
}
void pyramid(int n, int i){
	if(i>n){
		return;
	}
	space(i-1);
	print(2 * (n-i) +1);
	cout<<"\n";
 
	pyramid(n,i+1);
}
int main(){
	int n; cin>>n;
	pyramid(n,1);
	return 0;
}