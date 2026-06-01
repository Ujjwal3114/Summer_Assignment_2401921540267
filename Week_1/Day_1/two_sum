class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int>mp;
        for(int x=0 ; x<nums.size(); x++){
            if(mp.find(target-nums[x])!= mp.end() ) 
                return {x,mp[target-nums[x]]};
            else{
                mp.insert({nums[x],x});
            }
        }
        return {-1,-1};
    }
};