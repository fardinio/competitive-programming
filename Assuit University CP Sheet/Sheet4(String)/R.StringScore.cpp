#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    deque<char> q;

    for(char c : s){
        q.push_back(c);
    }

    int sc = 0;

    while(!q.empty()){
        char c = q.front();
        q.pop_front();

        if(c == 'V'){
            sc += 5;
        }
        else if(c == 'W'){
            sc += 2;
        }
        else if(c == 'X'){
            if(!q.empty()){
                q.pop_front();
            }
        }
        else if(c == 'Y'){
            if(!q.empty()){
                char next = q.front();
                q.pop_front();
                q.push_back(next);
            }
        }
        else if(c == 'Z'){
            if(!q.empty() && q.front() == 'V'){
                sc /= 5;
                q.pop_front();
            }
            else if(!q.empty() && q.front() == 'W'){
                sc /= 2;
                q.pop_front();
            }
        }
    }

    cout << sc << '\n';

    return 0;
}