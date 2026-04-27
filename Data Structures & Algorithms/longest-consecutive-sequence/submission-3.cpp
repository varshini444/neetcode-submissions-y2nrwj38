class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int cur=num;
                int count=1;
                while(s.find(cur+1)!=s.end()){
                    cur++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
