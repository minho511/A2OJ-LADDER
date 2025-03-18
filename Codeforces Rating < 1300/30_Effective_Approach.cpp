#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int input;
    long long cnt1 = 0;
    long long cnt2 = 0;
    cin >> n;
    vector<int> arr(100001);
    for(int i = 0; i<n; i++){
        cin >> input;
        arr[input] = i;
    }
    cin >> m;
    for(int j = 0; j<m; j++){
        cin >> input;
        cnt1+=arr[input]+1;
        cnt2+=n-arr[input];
        
    }

    cout << cnt1 << ' ' << cnt2;

}