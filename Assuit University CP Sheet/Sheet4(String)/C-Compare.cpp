#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	getline(cin,a);
	getline(cin,b);
	int i = 0;
	while(i<a.size() && i<b.size()){
		if(a[i]<b[i]){
			cout<<a<<"\n";
			return 0;
		}
		else if(a[i]>b[i]){
			cout<<b<<"\n";
			return 0;
		}
		i++;
	}
	if(a.size()<b.size()){
		cout<<a<<"\n";
	}
	else if(a.size()>b.size()){
		cout<<b<<"\n";
	}
	else{
		cout<<a<<"\n";
	}
	return 0;
}