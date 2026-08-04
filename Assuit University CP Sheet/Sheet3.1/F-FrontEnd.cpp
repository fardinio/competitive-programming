#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int f=0; int e=n-1;
	while(f<=e){
		cout<<num[f]<<" ";
		f++;
		if(f<e){
			cout<<num[e]<<" ";
			e--;
		}
		
	}
	return 0;
}