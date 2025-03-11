#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int p;
    cin >> n;
    int cnt = 0;
    cin >> p;
    int m = p;
    int M = p;
    
    for(int i = 1; i<n; i++){
        cin >> p;
        if(p<m){
            m = p;
            cnt++;
        }
        if(p>M){
            M = p;
            cnt ++;
        }
        
    }
    cout << cnt;
}