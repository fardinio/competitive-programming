//Elements can be inserted in the priority queue using push() method. After insertion, priority queue reorganize itself in such a way that the highest priority element is always at the top.

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    // Inserting elements
    pq.push(9);
    pq.push(8);
    pq.push(6);

    return 0;
}