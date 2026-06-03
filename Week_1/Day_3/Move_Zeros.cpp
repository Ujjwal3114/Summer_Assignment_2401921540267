class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pt1=0;
        while(nums[pt1]!=0 && pt1<nums.size()-1) pt1++;

        for(int i=pt1; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[pt1]);
                pt1++;
            }
        }
        
       
    }
};