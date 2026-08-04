#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>> n;

	vector<int>num(n);
	bool ok = 1;
	int count = 0;
	for(int i=0; i<n; i++){
		cin>> num[i];
		if(num[i]%2!=0){
			ok=0;
		}
	}
	while(ok){
		count++;
		for(int i=0; i<n; i++){
			num[i]/=2;
			if(num[i]%2!=0){
				ok=0;
				break;
			}
		}

	}
	cout<<count<<"\n";
	return 0;
}