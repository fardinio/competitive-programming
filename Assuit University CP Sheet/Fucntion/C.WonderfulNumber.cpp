#include <bits/stdc++.h>
using namespace std;

bool isOdd(long long n) {
    return n % 2 == 1;
}

bool isBinaryPalindrome(long long n) {
    string binary = "";

    if (n == 0) {
        binary = "0";
    }

    while (n > 0) {
        binary += char(n % 2 + '0');
        n /= 2;
    }

    int left = 0;
    int right = binary.size() - 1;

    while (left < right) {
        if (binary[left] != binary[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isOdd(n) && isBinaryPalindrome(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}