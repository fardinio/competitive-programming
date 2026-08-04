#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; cin>>a;
    string b = "9999";
    string add = "";

    int i = a.size()-1;
    int j = b.size()-1;

    int carry = 0;

    while(i>=0 || j>=0 || carry){
        int d1 = 0;
        int d2 = 0;
        if(i>=0){
            d1 = a[i] - '0';
        }
        if(j>=0){
            d2 = b[j] - '0';
        }
        int sum = d1 + d2 + carry;
        add += (sum%10) + '0';
        carry = sum / 10;

        i--;
        j--;
    }
    reverse(add.begin(), add.end());
    cout<<add<<"\n";

    string ans = "";
    carry = 0;

    for (i = a.size()-1; i >= 0; i--) {
        int d = a[i] - '0';

        int mul = d * 9999 + carry;

        ans += (mul % 10) + '0';

        carry = mul / 10;
    }

    while (carry) {
         ans += (carry % 10) + '0';
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());
    cout<<ans<<"\n";

    return 0;
}