class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxlen=0, start=0 ;
        unordered_map<char,int>mp;
        for (int i=0 ; i<s.length(); i++){
            
            
             if( mp.find(s[i])!=mp.end()){
                start=max(start, mp[s[i]]+1);
             }
             mp[s[i]]=i;
             maxlen=max(maxlen,(i-start+1));
  
        }
        return maxlen;
    }
};