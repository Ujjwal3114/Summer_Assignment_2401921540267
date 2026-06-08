class Solution {
public:
    bool isAnagram(string s, string t) {
        int fre[26]={0};
        if(s.length()!=t.length()) return false;
            for(int i=0; i<s.length(); i++){
                fre[s[i]-'a']++;
                fre[t[i]-'a']--;
            }
        for(auto val: fre){
            if(val!=0) return false;
        }
        return true;

    }
};