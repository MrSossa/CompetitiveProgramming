#include <bits/stdc++.h>

#define cin_pro  ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    cin_pro;
    int n,q,l,r;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> prefix(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i){
        prefix[i] = prefix[i-1] + arr[i];
    }

    for (int i = 0; i < n; ++i){
        cin >> l >> r;
        if (l==0) cout << prefix[r-1] << "\n";
        else cout << prefix[r-1]-prefix[l-1] << "\n";
    }

    return 0;
}