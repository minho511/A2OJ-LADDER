#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int u = 0, l = 0;
    for(char c : s){
        if(c < 97) u++;
        else l++;
    }
    if(u<=l){
        for(char c : s){
            if(c < 97) c+=32;
            cout << c;
        }
    }else{
        for(char c : s){
            if(c >= 97) c-=32;
            cout << c;
        }
    }
}