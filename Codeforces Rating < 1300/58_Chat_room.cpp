#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string hello = "hello";
    int k = 0;
    cin >> s;
    for(int i = 0; i< s.length(); i++){
        if(hello[k] == s[i]) k++;
    }
    if(k == 5) cout << "YES";
    else cout << "NO";
}