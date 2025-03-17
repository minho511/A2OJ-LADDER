#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    string s2;
    bool comp = true;
    bool check = true;
    cin >> s1 >> s2;
    for(int i = 0; i< s1.size(); i++){
        if(s1[i]>=97) s1[i]-=32;
        if(s2[i]>=97) s2[i]-=32;
        if(s1[i] != s2[i]){
            check = false;
            comp = s1[i] > s2[i];
            break;
        }
    }
    
    if(check) cout << 0;
    else if(comp) cout << 1;
    else cout << -1;
}