class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            cnt+=s[i]^t[i];
        }
        if(cnt>0)return false;
        return true;
    }
};
