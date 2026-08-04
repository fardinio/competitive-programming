#include<bits/stdc++.h>
using namespace std;
void recfunc(int x, int n){
    if(x>n){
        return;
    }
    recfunc(x+1,n);
    cout<<"I love Recursion\n";
}
int main(){
    int n; cin>>n;
    recfunc(1,n);
    return 0;
}