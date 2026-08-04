#include<bits/stdc++.h>
using namespace std;

void summation(long long x, int n){
    long long ans = 0;
    long long power = x * x;

    for(int i = 2; i <= n; i += 2){
        ans += power;
        power *= x * x;
    }

    cout << ans << "\n";
}

int main(){
    long long x;
    int n;

    cin >> x >> n;

    summation(x, n);

    return 0;
}