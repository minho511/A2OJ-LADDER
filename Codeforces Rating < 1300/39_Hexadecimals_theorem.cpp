#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> fibo = {0, 1};
    int n, f;
    int i = 2;
    cin >> n;
    if(n==0){cout << 0 << ' ' << 0 << ' ' << 0; return 0;}
    if(n==1){cout << 0 << ' ' << 0 << ' ' << 1; return 0;}
    if(n==2){cout << 0 << ' ' << 1 << ' ' << 1; return 0;}
    if(n==3){cout << 1 << ' ' << 1 << ' ' << 1; return 0;}
    while(1){
        f = fibo[i-1]+fibo[i-2];
        fibo.push_back(f);
        if(f == n) break;
        i++;
    }
    cout << fibo[i-4] << ' ' << fibo[i-3] << ' ' << fibo[i-1];
}