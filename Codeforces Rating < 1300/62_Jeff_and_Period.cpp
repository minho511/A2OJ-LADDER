#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    set<int> nums;
    vector<int> discards;
    vector<bool> diffs(100001, false); 
    vector<int> last_indexes(100001, -1);
    vector<int> common_diff(100001, -1);

    for(int i = 0; i< n; i++){
        cin >> a[i];
        if(last_indexes[a[i]] != -1)
            if(diffs[a[i]]){
                if(common_diff[a[i]] != i-last_indexes[a[i]]){
                    discards.push_back(a[i]);
                }
            }else{
                common_diff[a[i]] = i-last_indexes[a[i]];
                diffs[a[i]] = true;
            }
        last_indexes[a[i]] = i;
    }
    for(int i = 0; i< n; i++){
        nums.insert(a[i]);
    }
    for(int i = 0; i<discards.size(); i++){
        nums.erase(discards[i]);
    }
    vector<int> v;
    v.assign(nums.begin(), nums.end());
    sort(v.begin(), v.end());
    cout << nums.size() << '\n';
    for(int k : v){
        if(common_diff[k]==-1) common_diff[k] = 0;
        cout << k << ' ' << common_diff[k] << '\n';
    }
}