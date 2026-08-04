#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>> num[i];
    }
    int m = INT_MAX;
    int mi=-1;

    for(int i=0;i<n;i++){
        if(num[i]<m){
            m=num[i];
            mi=i+1;
        }
    }
    cout<<m<<" "<<mi<<"\n";
    return 0;
}

