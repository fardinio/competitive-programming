#include<bits/stdc++.h>
using namespace std;
void distinct(int n, vector<int>num){
	sort(num.begin(), num.end());
	int count=0;
	for(int i=0;i<n; i++){
		if(i==0 || num[i-1] != num[i]){
			count++;
		}
	}
	cout<<count<<"\n";
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	distinct(n,num);
	return 0;
}