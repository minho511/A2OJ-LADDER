#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    string ans = "";
    cin >> a;
    cin >> b;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == b[i]) ans+="0";
        else ans += "1";
    }
    cout << ans;
}