#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>num(n);
		int ev=0;
		int od=0;
		for(int i=0;i<n;i++){
			cin>>num[i];
			if(num[i]%2==0){
				ev++;
			}
			else{
				od++;
			}
		}
		int op = abs(ev-od);
		if(n%2==0){
			if(op==0){
				cout<<0<<"\n";
			}
			else{
				cout<<op/2<<"\n";
			}
		}
		else{
			cout<<-1<<"\n";
		}
	}
	return 0;
}