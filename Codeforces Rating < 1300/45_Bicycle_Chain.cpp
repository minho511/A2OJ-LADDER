#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i< n; i++) cin >> a[i];
    cin >> m;
    vector<float> b(m);
    for(int i = 0; i< m; i++) cin >> b[i];
    vector<int> cnt(10001);
    int M = 0;
    int k = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            k = (int)(b[j]/a[i]);
            if(k==b[j]/a[i]){
                    if(M<k) M = k;
                    cnt[k]++;
            }
        }
    }
    for(int i = M; i>=0; i--){
        if(cnt[i]>0){
            cout << cnt[i];
            break;
        }
    }
}