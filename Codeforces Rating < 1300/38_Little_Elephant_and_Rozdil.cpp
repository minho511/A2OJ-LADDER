#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    int idx1 = -1;
    int idx2 = -1;
    if(n == 1){
        cin >> p;
        cout << 1;
        return 0;
    }
    long long minD = pow(10,9);
    for(int i = 0; i<n;i++){
        cin >> p;
        if(p<minD){
            idx1 = i;
            minD = p;
            idx2 = -1;
        }
        else if(p==minD){
            idx2 = i;
        }
    }
    if(idx2 == -1) cout << idx1+1;
    else cout << "Still Rozdil";

}