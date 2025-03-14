#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    set<char> dis;
    cin >> s;

    for(auto c : s){
        dis.insert(c);
    }
    if(dis.size()%2==1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

}