#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,q; cin>>a>>b>>q;
	if(q % 3 ==0){
		cout<<(a^b)<<"\n";
	}
	else if(q % 3 == 1){
		cout<<a<<"\n";
	}
	else{
		cout<<b<<"\n";
	}
	return 0;
}