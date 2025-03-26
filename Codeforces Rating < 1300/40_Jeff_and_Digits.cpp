#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int input;
    int five = 0;
    int zero = 0;
    long k = 0;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> input;
        if(input == 5) five++;
        else zero++;
    }
    if(five/9==0){
        if(zero > 0) cout << 0;
        else cout << -1;
    }
    else if(zero == 0){
        cout << -1;
    }else{
        for(int i = 0; i<(five/9)*9; i++) cout << 5;
        for(int i = 0; i< zero; i++) cout << 0;
    }
    
}
