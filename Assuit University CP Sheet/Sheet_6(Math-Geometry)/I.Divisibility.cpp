#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B) {
        swap(A, B);
    }

    long long rightCount = B / X;
    long long leftCount = (A - 1) / X;

    long long rightSum = X * rightCount * (rightCount + 1) / 2;
    long long leftSum = X * leftCount * (leftCount + 1) / 2;

    long long answer = rightSum - leftSum;

    cout << answer << "\n";

    return 0;
}