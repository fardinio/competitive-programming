#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;

    vector< int >num(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>> num[i];
        sum+=num[i];
    }
    cout<<abs(sum)<<"\n";
}
