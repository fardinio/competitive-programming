#include <bits/stdc++.h>
using namespace std;

bool possible(int i, long long currentSum, long long target, const vector<long long>& a) {
    if (i == a.size()) {
        return currentSum == target;
    }

    return possible(i + 1, currentSum + a[i], target, a) ||
           possible(i + 1, currentSum - a[i], target, a);
}

int main() {
    int n;
    long long x;

    cin >> n >> x;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (possible(1, a[0], x, a)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}