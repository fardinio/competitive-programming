#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x; cin>> x;
    for(int i=0;i<n;i++){
        if(num[i]==x){
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    return 0;
}
