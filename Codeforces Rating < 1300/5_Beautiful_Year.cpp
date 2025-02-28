#include <bits/stdc++.h>

using namespace std;

int main(){
    int y;
    vector<int> cnt;
    cin >> y;
    y++;
    bool check;
    while(y>0){
        check = true;
        cnt = {0, 0, 0, 0 ,0, 0, 0, 0, 0 ,0};
        auto x = y;
        while(x>0){
            cnt[x%10]++;
            x/=10;
        }   
        for(int i = 0; i<10; i++){
            if(cnt[i]>=2){
                check = false;
                break;
            }
        }
        if(check){
            cout << y;
            return 0;
        }else{
            y++;
        }
    }
}