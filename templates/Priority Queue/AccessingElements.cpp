//Only the top element of the priority queue can be accessed using top() method. It is the element with the highest priority in priority queue.

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(9);
    pq.push(8);
    pq.push(6);

    // Accessing top element
    cout << pq.top();
    return 0;
}