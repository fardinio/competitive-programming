#include<bits/stdc++.h>
using namespace std;

int ways(int current, int e){
    if(current == e){
        return 1;
    }

    if(current > e){
        return 0;
    }

    int oneStep = ways(current + 1, e);
    int twoStep = ways(current + 2, e);
    int threeStep = ways(current + 3, e);

    return oneStep + twoStep + threeStep;
}

int main(){
    int s, e;
    cin >> s >> e;

    cout << ways(s, e) << "\n";

    return 0;
}