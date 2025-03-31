#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    string winner;
    int max_win = 0;
    map<string, int> teams;
    for(int i = 0; i< n;i++){
        cin >> s;
        teams[s]++;
        if(max_win < teams[s]){
            max_win = teams[s];
            winner = s;
        }
    }

    cout << winner;
}