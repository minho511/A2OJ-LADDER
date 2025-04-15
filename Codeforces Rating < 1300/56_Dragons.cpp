#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> x1, pair<int, int> x2){
    return x1.first < x2.first;
}

int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    int x , y;
    pair<int, int> p;
    bool win = true;
    for(int i = 0; i<n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));

    }
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i< n; i++){
        if(s<=v[i].first){
            win = false;
            break;
        }else{
            s+=v[i].second;
        }
    }

    if(win) cout << "YES";
    else cout << "NO";

}