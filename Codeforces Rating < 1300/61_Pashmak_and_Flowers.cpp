#include <bits/stdc++.h>
#define ll long long



using namespace std;
int main(){
    int n;
    cin >> n;
    int M = 1;
    int m = INT_MAX;
    ll nM = 0;
    ll nm = 0;
    vector<int> b(n);

    for(auto &c : b){
        cin >> c;
        if(c<m) m = c;
        if(c>M) M = c;
    }
    cout << M-m << ' ';
    for(int c : b){
        if(c == M) nM++;
        if(c == m) nm++;
    }
    if(m!=M){
        cout << nM*nm;
    }else{
        cout << nM*(nM-1)/2;
    }
    
}   