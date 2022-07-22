/*
	TEMPLATE
*/

#include <bits/stdc++.h>
#define D(x) cout << #x << ": " << x << endl;
#define CYN(x) cout << (x ? "YES" : "NO" ) <<endl; 
#define forn(i,n) for(int i=0; i< (int)n; i++)
#define for1(i,n) for(int i=1; i<= (int)n; i++)
#define all(v) v.begin(),v.end()
#define precision(x) cout<< setprecision(x)<< fixed
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
int ans = 0;
vector<int> ansVector;

void calculate(map<int,int> cards,map<int,int> numbers[],int i,int counter,vector<int> v){
    if (counter > ans) {
        ans = counter;
        ansVector = v;
    }
    if (i == numbers->size()) {
        return;
    }
    calculate(cards,numbers,i+1,counter,v);
    bool flag = true;
    map<int,int> auxCards = cards;
    for (const auto &number : numbers[i]) {
        if (cards[number.first] >= number.second) {
            cards[number.first] -= number.second;
        }else{
            flag = false;
        }
    }
    if (flag) {
        v.push_back(i);
        calculate(cards,numbers,i+1,counter+1,v);
    }else {
        calculate(auxCards,numbers,i+1,counter,v);
    }
    
}

void solve(){
	int q,n;
	cin >> q >> n;
	map<int,int> cards;
	map<int,int> numbers[q];
	int card;
	string numbersS[q];
	for (int i = 0; i < q; ++i) {
        cin >> numbersS[i];
        forn(j,numbersS[i].size()){
            numbers[i][numbersS[i][j] - '0']++;
        }
	}
	for (int i = 0; i < n; ++i) {
		cin >> card;
		cards[card]++;
	}
    vector<int> v;
    calculate(cards,numbers,0,0,v);
    cout << ans << "\n";
    forn(i,ansVector.size()){
        if (i == ansVector.size()-1){
            cout << numbersS[ansVector[i]] << "\n";
        }else {
            cout << numbersS[ansVector[i]] << " ";
        }
    }
}

int main(){
	read_fast();
	int t = 1;
	cases(t){
		solve();
	}
	return 0;
}