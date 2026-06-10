#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue<int> pq;
    
    // Add elements to the priority queue
    pq.push(100);
    pq.push(50);
    
    // Dispaly the size of priority queue
    cout << "Size of priority queue: " << pq.size() << endl;
    
    // Remove one element
    pq.pop();
    
    // Display size again
    cout << "Size after one pop: " << pq.size() << endl;
    return 0;
}