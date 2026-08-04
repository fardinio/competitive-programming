#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>> num[i];
        if(num[i]<0){
            num[i]=2;
        }
        else if(num[i]>0){
            num[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
