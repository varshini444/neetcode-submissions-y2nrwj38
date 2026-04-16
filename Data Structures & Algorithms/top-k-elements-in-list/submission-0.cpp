class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int,int> cnt;
                for(int i=0;i<nums.size();i++){
                    cnt[nums[i]]++;
                }
                vector<int> ans;
                for(int i=0;i<k;i++){
                    int maxfreq=0;
                    int element=-1;
                    for(auto it:cnt){
                        if(it.second>maxfreq){
                            maxfreq=it.second;
                            element=it.first;
                        }
                    }
                    ans.push_back(element);
                    cnt[element]=-1;

                }
                return ans;
}
};