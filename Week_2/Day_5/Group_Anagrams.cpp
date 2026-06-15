class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans ;
        map<vector<int>, vector<string>> mp;
        for (int i =0 ; i<strs.size(); i++){
            
            vector<int>feq(26);
            for(int j=0 ; j< strs[i].size(); j++){
                feq[strs[i][j]-'a']++;
            }
            mp[feq].push_back(strs[i]);
        }

        for (auto &x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
