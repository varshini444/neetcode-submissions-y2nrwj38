class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int cnt=0,num=i;
            while(num){
                cnt+=num%2;
                num/=2;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
