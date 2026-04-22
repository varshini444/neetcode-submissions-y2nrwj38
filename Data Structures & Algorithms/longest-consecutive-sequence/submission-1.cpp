class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1,maxi=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=1;
            }

        }
        return max(maxi,count);
    }
};
