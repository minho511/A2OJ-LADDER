#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k; 
    cin >> n >> m;
    long long ans = 0;
    int pos = 1;
    for(int i = 0; i< m; i++){
        cin >> k;
        if(pos<=k){
            ans += k-pos;
        }else{ //pos >k
            ans += n-pos+k;
        }
        pos = k;
    }
    cout << ans;
}