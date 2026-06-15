class Solution {
public:
    int compress(vector<char>& chars) {
        int count=0, idx=0;
        char ch= chars[0];
        string feq;
        for (auto x: chars){
            if(x== ch) count++;

            else {
                chars[idx++]=ch;
                ch=x;
                if(count==1) {

                    continue;
                }
                feq= to_string(count);
                for ( auto y: feq){
                    chars[idx++]= y;
                }
               
                count=1;
            }
        }
        chars[idx++]=ch;
        if(count==1) return idx;

         feq= to_string(count);
                for ( auto y: feq){
                    chars[idx++]= y;
                }
        return idx;

    }
};