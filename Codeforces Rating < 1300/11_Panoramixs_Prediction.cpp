#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n==2) return true;
    for(int i = 2; i< sqrt(n)+1; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >> b;
    bool p = true;
    if(!isPrime(b)){
        cout << "NO";
    }else{
        for(int i = a+1; i<b; i++){
            if(isPrime(i)) p = false;
        }
        if(p){cout << "YES";}
        else {cout << "NO";}
    }
}