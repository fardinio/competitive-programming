#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	vector<int>num(5,0);
	int i=0;
	while(i<s.size()){
		if(s[i]=='E' || s[i]=='e'){
			num[0]++;
		}
		else if(s[i]=='G' || s[i]=='g'){
			num[1]++;
		}
		else if(s[i]=='Y' || s[i]=='y'){
			num[2]++;
		}
		else if(s[i]=='P' || s[i]=='p'){
			num[3]++;
		}
		else if(s[i]=='T' || s[i]=='t'){
			num[4]++;
		}
		i++;
	}
	int min = INT_MAX;
	int a=0;
	while(a<5){
		if(num[a]<min){
			min = num[a];
		}
		a++;
	}
	cout<<min<<"\n";
	return 0;
}