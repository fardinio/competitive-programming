#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int freq[26] = {0};
    char ch;

    for(int i = 0; i < n; i++){
        cin >> ch;
        freq[ch - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        while(freq[i] > 0){
            cout<<char('a' + i);
            freq[i]--;
        }
    }

    cout << '\n';
    return 0;
}