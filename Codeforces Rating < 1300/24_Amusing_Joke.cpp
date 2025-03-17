#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    bool ans = true;
    vector<int> counts (26, 0);
    for(auto c : s1) counts[c - 65]++;
    for(auto c : s2) counts[c - 65]++;
    for(auto c : s3){
        counts[c-65]--;
        if(counts[c-65]<0){
            ans = false;
            break;
        }
    }
    if(ans){
        for(int i = 0; i<26; i++){
            if(counts[i] > 0){
                ans = false;
                break;
            }
        }
    }
    if(ans) cout << "YES";
    else cout << "NO";

}