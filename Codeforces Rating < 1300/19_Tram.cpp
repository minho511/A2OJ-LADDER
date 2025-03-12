#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    int p = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        p+=b-a;
        ans = max(ans, p);
    }
    cout << ans;
}