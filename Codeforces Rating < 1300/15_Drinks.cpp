#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int j;
    float tot = 0;
    cin >> n;
    for(int i = 0;i<n; i++){
        cin >> j;
        tot+=j;
    }
    cout << tot/n;
}