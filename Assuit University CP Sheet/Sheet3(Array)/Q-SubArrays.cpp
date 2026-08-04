#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){

		int n; cin>>n;

		vector<int>num(n);
		for(int i=0; i<n; i++){
			cin>>num[i];
		}
		int count = 0;
		for(int i=0; i<n; i++){
			count++;
			for(int j=i+1; j<n; j++){
				if(num[j]>num[j-1]){
					count++;
				}
				else{
					break;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}