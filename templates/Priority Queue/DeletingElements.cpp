//In priority queue, deletion can only be done from the top of the priority queue using pop()method. It means that we can only remove the element with highest priority in one move. After deletion, the priority queue rearranges itself such that the next greatest priority element becomes the top element.

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(9);
    pq.push(8);
    pq.push(6);

    // Delete top element
    pq.pop();
    cout << pq.top()<<"\n";
    pq.pop();
    cout<<pq.top();

    return 0;
}