#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans = 0;
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 1; i < s.length(); i++){
        if(s[i]==s[i-1]) ans++;
    }
    cout << ans;
}