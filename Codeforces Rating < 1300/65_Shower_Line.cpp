#include <bits/stdc++.h>

using namespace std;

int h(int a, int b, vector<vector<int>>happ, vector<int> p){
    return happ[p[a]][p[b]]+happ[p[b]][p[a]];
}

int main() {
    vector<vector<int>> happ(5, vector<int> (5));
    vector<int> p = {0, 1, 2, 3, 4};
    int Max = 0;
    int temp = 0;
    for(int i = 0; i< 5; i++){
        for(int j = 0; j< 5; j++){
            cin >> happ[i][j];
        }
    }
    
    do{
        temp = h(0, 1, happ, p)+2*h(2, 3, happ, p)+h(1, 2, happ, p)+2*h(3, 4, happ, p);
        if(temp>Max) Max = temp;
    }while(next_permutation(p.begin(), p.end()));
    cout << Max;
    return 0;
}