#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>num1(n);
	vector<int>num2(n);
	for(int i=0;i<n;i++){
		cin>>num1[i];
	}
	for(int i=0;i<n;i++){
		cin>>num2[i];
	}
	sort(num1.begin(), num1.end());
	sort(num2.begin(), num2.end());

	if(num1==num2){
		cout<<"yes"<<"\n";
	}
	else{
		cout<<"no"<<"\n";
	}
	return 0;
}