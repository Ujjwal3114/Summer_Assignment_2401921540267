class Solution {
public:
    void reverseString(vector<char>& s) {
        int fst=0, lst= s.size()-1;
        while(fst<=lst){
            swap(s[fst],s[lst]);
            fst++;
            lst--;
        }
    }
};