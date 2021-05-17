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
    string dna;
    cin >> dna;
    char aux = 'p';
    long long c=0,c2=0;
    forn(i,dna.size()){
    	if (dna[i] != aux){
    		aux = dna[i];
    		if (c2>=c){
    			c = c2;
    		}
    		c2 = 1;
    	}else{
    		c2 +=1;
    	}
    }
    cout << max(c,c2) << endl;
    return 0;
}