#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    bool first= true;
    cin >> s;
    vector<bool> v(s.length(), true);
    if(s.length() < 3){
        cout << s;
        return 0;
    }
    for(int i = 2; i< s.length(); i++){
        if(s[i-2]=='W' && s[i-1]=='U' && s[i]=='B'){
            v[i-2]=false;
            v[i-1]=false;
            v[i]=false;
        }
    }
    for(int i = 0; i<s.length(); i++){
        if(first && v[i]) first=false;
        else if(!first && i>0 && v[i] && !v[i-1]){
            cout << ' ';
        }
        if(v[i]) cout << s[i];
    }
}