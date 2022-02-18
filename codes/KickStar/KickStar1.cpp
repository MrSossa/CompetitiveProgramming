#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int n,m,sum,aux;
    for (int i = 1; i <= t; ++i){
        cin >> n >> m;
        sum = 0;
        for (int j = 0; j < n;++j){
            cin >> aux;
            sum += aux;
        }
        cout << "Case #" << i << ": " << sum%m << "\n";
    }
    return 0;
}