/*
	TEMPLATE
*/

#include <bits/stdc++.h>
#define D(x) cout << #x << ": " << x << endl;
#define CYN(x) cout << (x ? "YES" : "NO" ) <<endl; 
#define forn(i,n) for(int i=0; i< (int)n; i++)
#define for1(i,n) for(int i=1; i<= (int)n; i++)
#define all(v) v.begin(),v.end()
#define precision(x) cout<< setprecision(20)<< fixed
#define cin_pro  ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define F first
#define S second
#define pf push_front
#define mp make_pair
#define rall(v) v.rbegin(), v.rend()
#define cases(t) while(t--)
#define rforn(i,n) for(int i = n - 1; i >= 0; i--)
#define rfor1(i,n) for(int i = n; i >= 1; i--)
#define foreach(it, v) for(auto it: v)
#define mem(v, val) memset(v, (val), sizeof(v))
#define inf (int) 1e9
#define pi 3.1415926535897932384626433832795

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define seti set<int>
#define pqi priority_queue<int>

//Operaciones | Sumatorias | Otros
#define sumn(n) n*(n+1)/2
#define sumevens(n) n*(n+1)
#define sumodds(n) n*n
#define sumsquares(n) (n*(n+1)*(2*n+1))/6
#define sumcubes(n) sumn(n)*sumn(n)

int dr[] = {1,-1,0, 0,1,-1,-1, 1};
int dc[] = {0, 0,1,-1,1, 1,-1,-1};

using namespace std;

typedef long long ll;   

template <typename T> void amax(T &a, const T &b){ if( a < b) a = b; }
template <typename T> void amin(T &a, const T &b){ if( b < a) a = b; }
template <typename T> T gcd(T a, T b){
    if(a==0 || b==0)return max(a,b);
    else return gcd(b,a%b);
}

template <typename T> inline void prefix_sum(T arr, T& res){ 
	if(arr.size() > 0) res[0]=arr[0];
	for(int i = 1; i < arr.size(); i++) res[i] += res[i-1] + arr[i]; 
}

template <typename T> inline void sufix_sum(T arr, T& res){ 
	if(arr.size() > 0) res[arr.size()-1]=arr[arr.size()-1];
	for(int i = arr.size()-2; i >= 0; i--) res[i] += res[i+1] + arr[i]; 
}

void read_fast(){
	cin_pro;
	//#ifdef ONLINE_JUDGE
	#ifdef LOCAL
        	freopen("input.txt", "r", stdin);
	#else
        	#define endl '\n'
    #endif
}

/*
	END OF TEMPLATE
*/
pair<int,int> compare(pair<int,int> b1, pair<int,int> b2, int arr[]){
    int l1,l2;
    l1 = b1.F;
    l2 = b2.F;
    unordered_map<int,int> m1,m2;
    while (l1 < b1.S && l2 < b2.S) {
        if (m1[arr[l1]]) {l1++;continue;}
        else {m1[arr[l1]]++;}

        if (m2[arr[l2]]) {l2++;continue;}
        else {m2[arr[l2]]++;}

        if (arr[l1] < arr[l2]){
            return b1;
        }else if(arr[l1] > arr[l2]){
            return b2;
        }
        l1++;
        l2++;
    }
    if ((b1.S - b1.F) < (b2.S - b2.F)){
        return b1;
    }else{
        return b2;
    }
}
void solve(){
	int k,n;
    cin >> n >> k;
    int arr[n];
    forn(i,n) cin >> arr[i];
    int l,r,count;
    unordered_map<int,int> m;
    pair<int,int> p = {-1,-1};
    l = r = count = 0;
    while (l <= r && r < n){
        if (count == k){
            if (p.F == -1){
                p = {l,r};
                //cout << l << " " << r << endl;
            }else{
                p = compare(p,{l,r},arr);
                //cout << l << " " << r << endl;
            }
            m[arr[l]]--;
            if (m[arr[l]]==0){
                count--;
            }
            l++;
        }else{
            if (m[arr[r]]==0){
                count++;
            }
            m[arr[r]]++;
            r++;
        }
    }
    unordered_map<int,int> auxM;
    cout << arr[p.F];
    for (int i = p.F+1; i < p.S; ++i){
        if (!auxM[arr[i]])cout << " " << arr[i];
        auxM[arr[i]]++;
    }
    cout<< "\n";
}

int main(){
	read_fast();
	int t = 1;
	cases(t){
		solve();
	}
	return 0;
}
