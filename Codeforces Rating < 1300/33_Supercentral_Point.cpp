#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int x, y;
    int cnt = 0;
    vector<pair<int, int>> inputs;
    vector<int> maxX(2003, -1000);
    vector<int> maxY(2003, -1000);
    vector<int> minX(2003, 1000);
    vector<int> minY(2003, 1000);
    for(int i = 0; i< n; i++){
        cin >> x >> y;
        pair<int, int> p;
        p =make_pair(x, y);
        if(x>maxX[y+1000]) maxX[y+1000] = x;
        if(y>maxY[x+1000]) maxY[x+1000] = y;
        if(x<minX[y+1000]) minX[y+1000] = x;
        if(y<minY[x+1000]) minY[x+1000] = y; 
        inputs.push_back(p);
    }
    for(int i = 0; i<n; i++){
        if((minX[inputs[i].second+1000]<inputs[i].first)*(inputs[i].first <maxX[inputs[i].second+1000])
        & (minY[inputs[i].first+1000]<inputs[i].second) & (inputs[i].second <maxY[inputs[i].first+1000])){
            cnt++;       
        }
    }
    cout << cnt;
    
}