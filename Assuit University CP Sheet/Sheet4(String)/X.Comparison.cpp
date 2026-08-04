#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;

	 if(s.size() == 1){
       cout << s << "\n";
       return 0;
    }

	string e= "";

	for(int i=0;i+1<s.size();i++){

		string n = s.substr(0,i+1);
		string z = s.substr(i+1);
		sort(n.begin(),n.end());
		sort(z.begin(),z.end());

		string current = n+z;

		if(e.empty() || current<e){
			e=current;
		}
	}
	cout<<e<<"\n";
	return 0;
}