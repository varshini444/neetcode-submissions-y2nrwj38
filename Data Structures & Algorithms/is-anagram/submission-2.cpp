class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt(26,0);
        for(char ch:s){
            cnt[ch-'a']++;
        }
        for(char ch:t){
            cnt[ch-'a']--;
        }
        for(int i:cnt){
            if(i>0 || i<0){
                return false;
            }
        }
        return true;
    }
};
