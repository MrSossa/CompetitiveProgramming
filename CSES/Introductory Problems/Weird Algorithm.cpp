#include <bits/stdc++.h> 
#define D(x) cout << #x << ": " << x << endl; 
#define forn(i,n) for(int i=0; i< (int)n; i++) 
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
    
    long long n;
    cin >> n;
    while (n!=1){
    	cout << n << " ";
    	if (n%2==0){
    		n /= 2;
    	}else{
    		n *= 3;
    		n += 1;
    	}
    }
    cout << n << endl;
    return 0;
}