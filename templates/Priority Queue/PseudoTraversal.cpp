#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(9);
    pq.push(8);
    pq.push(6);

    // Create a copy
    priority_queue<int> temp(pq);
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}