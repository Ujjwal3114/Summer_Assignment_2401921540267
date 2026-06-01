class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fst=1, last=1;
         while(last<nums.size()){
           if(nums[last]== nums[last-1]) last++;
           else{
            if(fst!=last){
                nums[fst]=nums[last];
            }
            fst++;
            last++;
           }
         }
         return fst;
       
    }
};