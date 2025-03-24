#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);
    vector<int> diff(n);
    
    int minIdx = -1;
    int mindiff = 1000;

    cin >> heights[0];
    for(int i = 1; i<n;i++){
        cin >> heights[i];
        diff[i] = abs(heights[i]-heights[i-1]);
        if(diff[i] < mindiff){
            mindiff = diff[i];
            minIdx = i-1;
        }
    }
    diff[0] = abs(heights[n-1]-heights[0]);
    if(diff[0] < mindiff){
        minIdx = 0;
        cout << n <<' '<< 1;
    }else{
        cout << minIdx+1 << ' ' << minIdx+2;
    }
}