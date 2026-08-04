#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	cout<<x<<" "<<y;
}
int main(){
	int a,b; cin>>a>>b;
	swap(a,b);
	return 0;
}