class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int row = 0, col = 0, rowSize = strs.size() , j = 0;
        if(strs.size()==1) return strs[0];
        int prefixIdx = min(strs[0].size(), strs[1].size());
        string s;

        for (int i = 1; i < rowSize; i++) {
            j = 0;
            while ( j < prefixIdx && strs[i][j] == strs[i - 1][j] ) {
                j++;
            }
            prefixIdx = j;
        }

        for (int i = 0; i <prefixIdx ; i++) {
            s.push_back(strs[0][i]);
        }
        return s;
    }
};