//https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/

class Solution {
public:
    string getHappyString(int n, int k) {
        string s = "";
        int aux;
        n--;
        aux = pow(2,n);
        if (k <= aux){
            s += "a";
        }else if (k <= aux*2){
            s += "b";
            k-= aux;
        }else if (k <= aux*3){
            s += "c";
            k -= aux*2;
        }else{
            return s;
        }
        while(n--){
            aux = pow(2,n);
            if (s[s.size()-1] == 'a'){
                if (k <= aux){
                    s += "b";
                }else if (k <= aux*2){
                    s += "c";
                    k -= aux;
                }  
            }else if (s[s.size()-1] == 'b'){
                if (k <= aux){
                    s += "a";
                }else if (k <= aux*2){
                    s += "c";
                    k -= aux;
                } 
            }else{
                if (k <= aux){
                    s += "a";
                }else if (k <= aux*2){
                    s += "b";
                    k-= aux;
                }  
            }
        }
        return s;
    }
};