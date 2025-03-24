#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    if((n+1)/2<k){
       k-=(n+1)/2;
       cout << k*2; 
    }else{
        cout << k*2-1;
    }

}