#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>d={10,20,30,40,50};
	cout<<"Orginal deque: ";
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<"\n";

	// Accessing the front element
    cout << "The first element (front) is: "<<d.front()<<"\n";
    cout<<"The last element (back) is: "<<d.back()<<"\n";
    cout<<"The element at index 3 is: "<<d[3]<<"\n";
    cout<<"The element at index 4 is:"<<d.at(4)<<"\n";

    return 0; 
}