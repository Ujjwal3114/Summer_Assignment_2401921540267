class Solution {
public:
    bool isPalindrome(string s) {
        int front=0, back=s.size()-1;
        if(s.size()==1) return true;
        while(front<=back){
            while(front<s.size()-1 && (!isalnum(s[front]))  ) front++;
            while(!isalnum(s[back]) && back>=0 && back>=front) back--;
            if(front<=back && tolower(s[front])!=tolower(s[back])) return false;
            front++;
            back--;
        }
        return true;
    }
};