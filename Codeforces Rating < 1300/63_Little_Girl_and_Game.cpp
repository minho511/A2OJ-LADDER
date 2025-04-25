#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cntOdd = 0;
    vector<int> counts(26);
    for(int i = 0; i< s.length(); i++)
        counts[s[i]-97]++;
    
    for(int i = 0; i< 26; i++)
        if(counts[i]%2 == 1) cntOdd++;
    if(cntOdd==0 || cntOdd%2 ==1) cout << "First";
    else cout << "Second";
}