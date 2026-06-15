class Solution {
public:

   
    string decodeString(string s) {
      
      stack<int> countSt;
      stack<string>strSt;
      int num=0;
      string cur="";

      for (int i=0; i<s.size(); i++){

        if(isdigit(s[i])){
            num= num*10 + (s[i]-'0');
        }
        else if(s[i]=='['){
            countSt.push(num);
            strSt.push(cur);

            num=0;
            cur="";
        }
        else if(s[i]==']'){
            int repeat= countSt.top();
            countSt.pop();
            string temp="";

            for (int i=0; i< repeat; i++){
                temp+=cur;
            }

            string prev =strSt.top();
            strSt.pop();
            cur=prev + temp;
            

        }
        else {
            cur+=s[i];
        }
      } 
      return cur;

    }
};