#include<bits/stdc++.h>
using namespace std;
double sum(int n, int i, vector<double>& num){
	if(i==n){
		return 0;
	}
	return num[i] + sum(n, i+1, num);
}
int main(){
	int n; cin>>n;
	vector<double>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	double s =sum(n, 0, num);
	cout<<fixed<<setprecision(6)<<s/n<<"\n";
}