#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k; cin>>n>>k;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num.begin(),num.end(),greater<int>());
	long long sum=0;
	for(int i=0;i<k;i++){
		if(num[i]>0)
			sum+=num[i];
	}
	cout<<sum<<"\n";
	return 0;
}