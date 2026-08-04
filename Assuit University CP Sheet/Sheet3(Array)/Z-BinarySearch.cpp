#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    unordered_set<int> num;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        num.insert(x);
    }

    while(q--){
        int x;
        cin >> x;

        if(num.count(x)){
            cout << "found\n";
        }
        else{
            cout << "not found\n";
        }
    }

    return 0;
}