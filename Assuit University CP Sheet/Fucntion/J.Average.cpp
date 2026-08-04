#include<bits/stdc++.h>
using namespace std;
void print(int n){
	vector<double>num(n);
	double sum = 0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum += num[i];
	}
	cout<<fixed<<setprecision(6)<<sum/n;
}
int main(){
	int n; cin>>n;
	print(n);
	return 0;
}