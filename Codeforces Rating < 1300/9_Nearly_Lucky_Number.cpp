#include <bits/stdc++.h>

using namespace std;

bool isLucky(long long n){
    int l;
    while(n>0){
        l = n%10;
        if(l!=4 & l!=7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    int cnt = 0;
    while(n>0){
        auto k = n%10;
        if(k==4 | k==7) cnt++;
        n /= 10;
    }
    if(cnt>0 & isLucky(cnt)) cout << "YES";
    else cout << "NO";
}