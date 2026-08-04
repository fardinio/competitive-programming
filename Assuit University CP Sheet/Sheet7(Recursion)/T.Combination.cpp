#include <bits/stdc++.h>
using namespace std;

long long dp[35][35];

long long combination(int n, int r) {

    if (r == 0 || r == n) {
        return 1;
    }

    if (dp[n][r] != 0) {
        return dp[n][r];
    }

    dp[n][r] = combination(n - 1, r - 1)
             + combination(n - 1, r);

    return dp[n][r];
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << combination(n, r) << "\n";

    return 0;
}