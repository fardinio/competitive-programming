#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;

    long long low =1;
    long long high = 2000000000;
    long long ans = 0;

    while(low<=high){
        long long mid = low + (high - low)/2;

        long long sum = (mid * (mid +1))/2;

        if(sum<=n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}