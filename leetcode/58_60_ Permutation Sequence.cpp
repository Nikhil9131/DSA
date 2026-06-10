class Solution {
public:
    string getPermutation(int n, int k) {
       vector<char> p;
       for (int i=1; i<=n;i++){
        p.push_back('0'+i);
       } 
       for(int i=1;i<k;i++){
        next_permutation(p.begin(), p.end());
       }
       string ans="";
       for(char c:p){
        ans+=c;
       }
       return ans;
    }
};