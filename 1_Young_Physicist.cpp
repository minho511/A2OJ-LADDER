#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    int a=0, b=0, c=0;
    int d, e, f;
    cin >> T;
    for(int i = 0; i< T; i++){
        cin >> d >> e >> f;
        a += d;
        b += e;
        c += f;
    }
    if((a==0) && (b==0) && (c==0)) cout << "YES";
    else cout << "NO";
}