#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>num(n);
	int min = INT_MAX;

	for(int i=0; i<n; i++){
		cin>>num[i];
		if(num[i]<min){
			min = num[i];
		}
	}
	int x = count(num.begin(), num.end(),min);
	if(x%2!=0){
		cout<<"Lucky\n";
	}
	else{
		cout<<"Unlucky\n";
	}
	return 0;
}