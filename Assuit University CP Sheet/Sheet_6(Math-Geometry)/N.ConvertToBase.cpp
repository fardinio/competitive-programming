#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    if(t==1){
        string s; cin>>s;
        int x; cin>>x;
        int digit = 0;
        long long ans =0;

        for(char c: s){
            if(c>='0' && c<='9'){
                digit =  c - '0';
            }
            else{
                digit = c-'A'+ 10;
            }
            ans = ans * x + digit;
        }
        cout << ans << "\n";
    }
    else{
        int n, x; cin>>n>>x;
        string s = "";
        while(n>0){
            int rem = n%x;
            if(rem<10){
                s += (rem + '0');
            } 
            else{
                s += (rem - 10 + 'A' );
            }
            n/=x;
        }
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
    return 0;
}