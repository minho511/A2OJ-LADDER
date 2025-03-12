#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> temp;
    for(int i = 0; i< s.length(); i++){
        if(s[i] != '+'){
            temp.push_back(s[i]-48);
        }
    }
    sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size()-1; i++){
        cout << temp[i] << '+';
    }
    cout << temp[temp.size()-1];

}