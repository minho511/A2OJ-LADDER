#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    int minIdx = 0;
    int minVal = 101;
    int maxIdx = 0;
    int maxVal = -1;
    vector<int> v;
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin>>a;
        v.push_back(a);
        if(a>maxVal){
            maxIdx = i;
            maxVal = a;
        }
        if(a<=minVal){
            minIdx = i;
            minVal = a;
        }
    }
    // minIdx < maxIdx
    if(minIdx < maxIdx)
        cout << n-minIdx+maxIdx-2;
    else
        cout << n-minIdx+maxIdx-1;
}