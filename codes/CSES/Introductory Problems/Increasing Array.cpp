#include <bits/stdc++.h> 
#define D(x) cout << #x << ": " << x << endl; 
#define forn(i,n) for(long long i=0; i< (long long)n; i++) 
#define for1(i,n) for(int i=1; i<= (int)n; i++) 
#define all(v) v.begin(),v.end()  

using namespace std;  

typedef long long ll;   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cout<< setprecision(20)<< fixed;
    #ifdef LOCAL         
        freopen("input.txt", "r", stdin);
    #else
        #define endl '\n'     
    #endif
    int n;
    cin >> n;
    long long m=0,aux,aux2;
    cin >> aux;
    n--;
    while(n--){
    	cin >> aux2;
    	if (aux2<aux){
    		m += (aux-aux2);
    	}else{
    		aux = aux2;
    	}
    }
    cout << m << endl;
    return 0;
}