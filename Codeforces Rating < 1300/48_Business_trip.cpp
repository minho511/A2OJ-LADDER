#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    int j = 0;
    int sum = 0;
    vector<int> a(12);
    for(int i = 0; i< 12; i++){
        cin >> a[i];
        sum+=a[i];
    }
    if(sum < k){
        cout << -1;
        return 0;
    }
    sort(a.begin(), a.end());
    while(k>0){
        k-=a[11-j];
        j++;
        if(j==12) break;
    }
    cout << j;
}