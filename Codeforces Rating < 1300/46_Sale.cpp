#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    for(int i = 0; i<m; i++){
        if(vec[i]>0) break;
        ans+=vec[i];

    }
    cout << -1*ans;
}