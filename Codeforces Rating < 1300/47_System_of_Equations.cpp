#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, cnt(0);
    int b;
    cin >> n >> m;

    for(int a = 0; a*a<=n; a++){
        b = n-a*a;
        if(b*b<0) break;
        if(b*b+a == m) cnt++;
    }
    cout << cnt;
}
