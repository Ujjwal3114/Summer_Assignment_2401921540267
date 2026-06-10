class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int stSize= s.size();
        vector<int> poslen;
        if( stSize ==1) return false;
        for (int i=1 ; i*i <= stSize; i++){
            if(stSize%i ==0 ){
                poslen.push_back(i);
                if(stSize/i!= stSize){
                    poslen.push_back(stSize/i);
                }
                
            } 
        } 
        
        for( int i=0; i< poslen.size(); i++){
            int j=0;
            bool anslen= true;
            if( s.length()%poslen[i] !=0) {
                anslen= false;
                break;
            }
            while( j+poslen[i]< s.size()){
                if(s[j]!=s[(j+poslen[i])]){
                    anslen = false;
                    break;
                }
                j++;
            }
            if(anslen) return true;
        }
        return false;
    }
};