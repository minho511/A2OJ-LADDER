#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    string s;
    cin >> k;
    string t;
    vector<int> ss(26);
    cin >> s;
    for(auto c : s){
        ss[c-97]++;
    }
    for(int i = 0 ; i< 26; i++){
        if(ss[i]%k==0){
            for(int j = 0; j<(ss[i]/k); j++) t+=(i+97);
        }
        else if(ss[i]==0) continue;
        else{
            cout << -1;
            return 0;
        }
    }
    for(int i = 0; i<k; i++) cout << t;
}