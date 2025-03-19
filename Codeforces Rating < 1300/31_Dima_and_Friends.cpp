#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int p;
    int tot = 0;
    int ans = 0;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i<n; i++){
        cin >> p;
        tot+=p;
        vec.push_back(p);
    }
    for(int i = 1; i<=5; i++)
        if(((tot+i)%(n+1))!=1) ans++;
    cout << ans;
}

