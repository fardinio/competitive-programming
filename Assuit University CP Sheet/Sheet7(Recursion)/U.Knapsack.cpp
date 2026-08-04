#include <bits/stdc++.h>
using namespace std;

int knapsack(int i, int capacity, const vector<int>& weight, const vector<int>& value) {
    if (i == weight.size()) {
        return 0;
    }

    int notTake = knapsack(i + 1, capacity, weight, value);

    int take = 0;

    if (weight[i] <= capacity) {
        take = value[i] + knapsack(
            i + 1,
            capacity - weight[i],
            weight,
            value
        );
    }

    return max(take, notTake);
}

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> weight(n);
    vector<int> value(n);

    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    cout << knapsack(0, W, weight, value) << "\n";

    return 0;
}