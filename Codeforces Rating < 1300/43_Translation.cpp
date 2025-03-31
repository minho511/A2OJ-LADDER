#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    bool ans = true;
    if(s.size() != t.size()) ans = false;
    else{
        for(int i = 0; i<s.size(); i++){
            if(s[i] != t[s.size()-i-1]){
                ans = false;
                break;
            }
        }
    }
    if(ans) cout << "YES";
    else cout << "NO";

}