#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    int _min = 0;
    int _max = 0;
    int temp;
    int tempIdx;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> v2(m);
    for(int i = 0; i< m; i++) cin >> v[i];
    copy(v.begin(), v.end(), v2.begin());
    
    for(int i = 0; i< n; i++){
        temp = 1001;
        for(int j = 0; j< m; j++){
            if(v[j] == 0) continue;
            if(temp > v[j]){
                temp = v[j];
                tempIdx = j;
            }
        }
        _min+=v[tempIdx];
        v[tempIdx]--;
    }
    
    for(int i = 0; i< n; i++){
        temp = 0;
        for(int j = 0; j< m; j++){
            if(v2[j] == 0) continue;
            if(temp < v2[j]){
                temp = v2[j];
                tempIdx = j;
            }
        }
        _max+=v2[tempIdx];
        v2[tempIdx]--;
    }
    cout << _max << ' ' << _min;
}