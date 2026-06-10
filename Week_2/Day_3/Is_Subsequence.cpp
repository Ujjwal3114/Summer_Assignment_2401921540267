class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0, j=0;
        if(s.size()>t.size()) return false;
        else if(s.size()==0) return true;
        while(i<t.size()&& j<s.size()){
            if(t[i]==s[j]) {
                j++;
                if(j==s.size()) return true;
            }
            i++;    
        }
        return false;
    }
};