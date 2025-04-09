#include <bits/stdc++.h>

using namespace std;

int main(){
    int cnt0 = 0;
    int cnt1 = 0;
    bool ans = false;

    string s;
    cin >> s;

    for(auto c : s){
        if(c == '1'){
            cnt1++;
            if(cnt1 == 7){
                ans = true;
                break;
            }
            cnt0 = 0;
        }
        if(c=='0'){
            cnt0++;
            if(cnt0 == 7){
                ans = true;
                break;
            }
            cnt1 = 0;
        }

    }
    if(ans) cout << "YES";
    else cout << "NO";
}