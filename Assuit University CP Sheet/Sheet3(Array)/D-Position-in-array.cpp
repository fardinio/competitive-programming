#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>> num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]==10 || num[i]<10){
            cout<<"A["<<i<<"] ="<<" " <<num[i]<<"\n";
        }
    }
    cout<<"\n";
    return 0;
}
