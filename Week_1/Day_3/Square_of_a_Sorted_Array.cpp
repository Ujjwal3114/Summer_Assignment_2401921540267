class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low=0 , high=nums.size()-1;
        int idx=high;
        vector<int>sq(nums.size());
        while(low<=high){
             if(nums[low]*-1> nums[high]){
            sq[idx]=pow(nums[low],2);
            low++;
            idx--;
        }
        else{
            sq[idx]=pow(nums[high],2);
            high--;
            idx--;
        }
        }
       return sq;

    }
};