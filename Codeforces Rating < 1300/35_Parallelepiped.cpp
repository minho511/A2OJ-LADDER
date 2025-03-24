#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input(3, 0);
    int a;
    cin >> input[0] >> input[1] >> input[2];
    sort(input.begin(), input.end());
    for(int i = 1; i<=input[0]; i++){
        if(input[0]/i*input[1]/i == input[2]){
            a = i;
            break;
        }
    }
    cout << 4*(a + (input[0] + input[1])/a);
}