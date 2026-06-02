class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int fst=0;
        double sum =0, maxSum=numeric_limits<double>::lowest();;
        for (int i =0 ; i<nums.size(); i++){
            sum+=nums[i];
            if((i-fst+1)>k) {
                sum-=nums[fst];
                fst++;
                
            }    
            if(i-fst+1==k) maxSum= max(maxSum,sum);
                
        }
        return maxSum/k;
    }
};