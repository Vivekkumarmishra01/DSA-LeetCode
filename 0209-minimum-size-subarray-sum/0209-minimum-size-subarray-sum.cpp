class Solution {
public:
// day 15 h
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int left=0;
        int minLength=INT_MAX;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                //lets shrink size and check
                minLength=min(minLength,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return minLength==INT_MAX?0:minLength;

    }
};