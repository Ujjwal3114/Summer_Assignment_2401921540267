class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int feq1[26]={0}, feq2[26]={0}, windowSize= p.size(), stIdx=0;
        vector<int>ansArr;
        for( auto ele: p){
            feq1[ele- 'a']++;

        }
        for (int i=0 ; i< s.size(); i++){
            feq2[s[i]-'a']++;
            bool ans= true;
            if(i-stIdx+1 > windowSize) feq2[s[stIdx++]-'a']--;
            if(i-stIdx +1 == windowSize) {
                for (int j=0 ;j< 2
                6; j++ ){
                    if(feq1[j]!=feq2[j]){
                        ans= false ;
                        break;
                    }
                }
                if(ans) ansArr.push_back(stIdx);
            }

        }
        return ansArr;

    }
};