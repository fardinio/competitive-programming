#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long a = 0, b = 1;

    if(n == 1){
        cout << a << "\n";
    }
    else if(n == 2){
        cout << b << "\n";
    }
    else{
        long long fib;

        for(int i = 3; i <= n; i++){
            fib = a + b;
            a = b;
            b = fib;
        }

        cout << b << "\n";
    }

    return 0;
}