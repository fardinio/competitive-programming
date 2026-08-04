#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(num[i]+1 == num[j]){
				count++;
				break;
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}