#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<vector<int>> cnt_matrix(3, vector<int> (3, 0));
    int a;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> a;
            cnt_matrix[i][j]+=a;
            if(i<2) cnt_matrix[i+1][j]+=a;
            if(i>0) cnt_matrix[i-1][j]+=a;
            if(j<2) cnt_matrix[i][j+1]+=a;
            if(j>0) cnt_matrix[i][j-1]+=a;
        }
    }
    for(int i = 0; i< 3; i++){
        for(int j = 0; j<3; j++){
            if(cnt_matrix[i][j]%2 == 0){
                cnt_matrix[i][j] = 1;
            }else{
                cnt_matrix[i][j] = 0;
            }
            cout << cnt_matrix[i][j];
        }
        cout << '\n';
    }

}