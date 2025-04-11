#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;

    for(auto c : s){
        if(c < 97) c+=32;
        if((c==97)||(c==101)||(c==105)||(c==111)||(c==117)||(c==121)) continue;
        cout << '.' << c;
    }
}