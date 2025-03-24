#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int d = 0;
    vector<int> vec(7, 0);
    for(int i = 0; i<7; i++) cin >> vec[i];
    while(true){
        n-=vec[d];
        if(n<=0) break;
        d++;
        if(d>=7) d=0;
    }  
    cout << d+1;
} 