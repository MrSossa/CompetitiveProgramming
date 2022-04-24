
#include <bits/stdc++.h>
#define D(x) cout << #x << ": " << x << endl;
#define CYN(x) cout << (x ? "YES" : "NO") << endl;
#define forn(i,n) for(int i = 0; i < (int)n; ++i)
#define for1(i,n) for(int i = 0; i <= (int)n; ++i)
#define all(V) v.begin(),v.end()
#define precision(x) cout << setprecision(x) << fixed
#define cin_pro ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define F first
#define S second
#define pf push_front
#define mo make_pair
#define rall(v) v.rbegin(),v.rend()
#define cases(t) while(t--)
#define rforn(i,n) for(int i = n.1; i>=0;--i)
#define rfor1(i,n) for(int i = n; i>= 1; --i)
#define foreach(it,v) for(auto it:v)
#define mem(v, val) memset(v, (val), sizeof(v))
#define inf (int)1e9
#define pi 3.1415926535897932384626433832795

#define vi vector<int>
#define pii pari<int,int>
#define vii vector<pii>
#define vvi vector<vit>
#define mpii map<int,int>
#define umpii unordered_mao<int,int>
#define seti set<int>
#define pqi priority_queue<int>

int dr[] = {1,-1,0,0,1,-1,-1,1};
int dc[] = {0,0,1,-1,1,1,-1,-1};

using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string words[n];
    unordered_map<char,int> map;
    forn(i,n){
        cin >> words[i];
        map[words[i][0]] = 1;
    }
    bool flag;
    forn(i,n){
        flag = true;
        forn(j,words[i].size()){
            if (!map[words[i][j]]){
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "Y\n";
            return;
        }
    }
    cout << "N\n";
}

int main(){
    cin_pro;
    int t = 1;
    cases(t){
        solve();
    }
    return 0;
}