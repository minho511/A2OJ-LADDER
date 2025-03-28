#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool one= false;
    int cnt_four = 0;
    bool ans = true;
    for(auto c : s){
        if((c!='1') & (c!='4')){
            ans = false;
            break;
        }
        if(c == '1'){
            one = true;
            cnt_four = 0;
        }
        if(one & (c == '4')){
            cnt_four++;
            one = false;
        }
        else if(!one & (c=='4')){
            if(cnt_four==0){
                ans = false;
                break;
            }
            cnt_four++;
            if(cnt_four >=3 ){
                ans = false;
                break;
            }
        }
    }
    if(ans) cout << "YES";
    else cout << "NO";
}