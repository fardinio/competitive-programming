#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 6}
    };

    // Delete first row
    v.erase(v.begin());

    // Delete element in row
    v[0].erase(v[0].begin() + 1);

    // Delete last row
    v.pop_back();


    
    for (auto row : v) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}