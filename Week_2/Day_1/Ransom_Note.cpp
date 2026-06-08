class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int fre[26]={0};
        if(magazine.length()< ransomNote.length()) return false;
        for (int i =0; i< magazine.length(); i++){
            fre[magazine[i]-'a']++;
            if(i< ransomNote.length()) fre[ransomNote[i]-'a']--;
        }
        for ( int val:fre){
            if(val<0) return false;
        }
        return true;
    }
};