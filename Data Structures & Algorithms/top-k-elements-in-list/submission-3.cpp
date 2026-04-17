class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int,int> ans;
                vector<int> res;
                for(int i=0;i<nums.size();i++){
                    ans[nums[i]]++;
                }
                for(int i=0;i<k;i++){
                    int maxfreq=0;
                    int element=-1;
                    for(auto it:ans){
                        if(it.second>maxfreq){
                            maxfreq=it.second;
                            element=it.first;
                        }
                    }
                    res.push_back(element);
                    ans[element]=-1;
                }
                return res;
}
};