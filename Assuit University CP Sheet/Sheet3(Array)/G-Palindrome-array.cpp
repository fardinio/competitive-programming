#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int>rev =num;
    reverse(rev.begin(),rev.end());

    if(rev==num){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
