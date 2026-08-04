#include<bits/stdc++.h>
using namespace std;

void concatenate(vector<int> a, vector<int> b){
    vector<int> c;

    for(int i = 0; i < b.size(); i++){
        c.push_back(b[i]);
    }

    for(int i = 0; i < a.size(); i++){
        c.push_back(a[i]);
    }

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    concatenate(a, b);

    return 0;
}