#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vec(n, 0);
    vector<bool> enough(n, false);
    bool allEnough = false;
    int last = n-1;
    for(int i = 0; i<n;i++) cin >> vec[i];
    while(!allEnough){
        allEnough=true;
        for(int i = 0; i<n;i++){
            if(enough[i]) continue;
            if(vec[i]<=m){
                enough[i] = true;
            }else{
                vec[i]-=m;
                last = i;
            }
        }
        for(int i = 0; i<n; i++) if(!enough[i]) allEnough=false;
    }
    cout << last+1;
}