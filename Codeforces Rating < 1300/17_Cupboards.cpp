#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l, r;
    vector<int> cnt (4, 0); // 01 10 00 11
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> l >> r;
        cnt[0] += l+1-r;
        cnt[1] += 1+r-l;
        cnt[2] += r+l;
        cnt[3] += 2-r-l;
    }   
    int min = *min_element(cnt.begin(), cnt.end());
    cout << min;
}