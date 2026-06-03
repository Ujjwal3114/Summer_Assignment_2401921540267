class Solution {
public:
    int maxArea(vector<int>& height) {
        long  amount=0, maxAmount=0;
        int left=0, right = height.size()-1;
        while(left<right){
            int length=min(height[left], height[right]);
            amount= 1L*  length*(right-left);
            maxAmount=max(maxAmount,amount);
            if(height[left]<height[right]) left++;
            else right--;

        }
        return maxAmount;
    }
};