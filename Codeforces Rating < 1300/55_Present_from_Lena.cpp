#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int k = 0; k<=n; k++){
        for(int i = n-k; i>0; i--) cout << "  ";
        for(int i = 0; i<=2*k; i++){
            if(i<=k){cout << i;}
            else{cout << 2*k-i;}
            if(i<2*k) cout << ' ';
        }
        cout << '\n';
    }
    for(int k = n-1; k>=0; k--){
        for(int i = 0; i<n-k; i++) cout << "  ";
        for(int i = 2*k; i>=0; i--){
            if(i<=k){cout << i;}
            else{cout << 2*k-i;}
            if(i>0) cout << ' ';
        }
        cout << '\n';
    }
}