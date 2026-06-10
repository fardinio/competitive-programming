#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Add new row
    v.push_back({7, 8, 9});

    // Insert element in row
    v[1].insert(v[1].begin() + 1, 4);

    for(auto row: v){
        for(int val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    