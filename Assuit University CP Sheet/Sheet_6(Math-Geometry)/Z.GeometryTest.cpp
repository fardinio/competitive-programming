#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,s;
    cin>>r>>s;
    if(2*r>=s*sqrt(2)){
        cout<<"Circle\n";
    }
    else if(s>=2*r){
        cout<<"Square\n";
    }
    else{
        cout<<"Complex\n";
    }
    return 0;
}