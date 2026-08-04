#include<bits/stdc++.h>
using namespace std;
void maxmin(vector<int>v){

	int max = INT_MIN;
	int min = INT_MAX;

	for(int i=0;i<v.size();i++){
		if(v[i]>max){
			max=v[i];
		}
		if(v[i]<min){
			min=v[i];
		}
	}
	cout<<min<<" "<<max;
}
int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	maxmin(num);
	return 0;
}