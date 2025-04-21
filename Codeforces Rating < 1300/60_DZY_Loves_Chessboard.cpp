#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char temp = 'B';
    vector<string> vec(n);
    for(int i = 0; i< n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){    
            if(vec[i][j] == '.'){
                vec[i][j] = temp;
            }
            if(temp == 'W') temp = 'B';
            else temp = 'W';
        }
        if(m%2==0){
            if(temp == 'W') temp = 'B';
            else temp = 'W';
        }
    }
    for(int i =0; i< n; i++){
        cout << vec[i] << '\n';
    }

}