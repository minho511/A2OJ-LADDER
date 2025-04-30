#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, sx, sy, ex, ey;
    int cnt = 0;
    string s;
    cin >> t >> sx >> sy >> ex >> ey;
    cin >> s;
    bool a = false;
    for(auto c : s){
        if(c == 'N' && ey > sy) sy++;
        else if(c == 'E' && ex > sx) sx++;
        else if(c == 'S' && sy > ey) sy--;
        else if(c == 'W' && sx > ex) sx--;
        cnt++;
        if(sx == ex && sy == ey){
            a = true;
            break;
        }
    }
    if(!a) cout << -1;
    else cout << cnt;
}