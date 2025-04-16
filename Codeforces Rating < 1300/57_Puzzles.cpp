#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m;
    vector<int> v(m);
    int min = 996;
    for(int i = 0; i<m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i<m-n+1; i++){
        d = v[i+n-1]-v[i];
        if(d<min){
            min = d;
        }
    }
    cout << min;
}