#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> dragons(d+1, 0);
    for(int i = 0; i<=d; i+=k) dragons[i] = 1;
    for(int i = 0; i<=d; i+=l) dragons[i] = 1;
    for(int i = 0; i<=d; i+=m) dragons[i] = 1;
    for(int i = 0; i<=d; i+=n) dragons[i] = 1;
    cout << accumulate(dragons.begin()+1, dragons.end(), 0);
}