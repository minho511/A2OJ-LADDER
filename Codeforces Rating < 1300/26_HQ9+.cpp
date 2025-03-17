#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool check = false;
    cin >> s;
    for(auto c : s)
        if(c=='H'|c=='Q'|c=='9'){
            check=true;
            break;
        } 
    if(check) cout << "YES";
    else cout << "NO";
}