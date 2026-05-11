class Solution {
public:
    int isunique(string s,int start,int end){
        int visited[256]={0};
        for(int i=start;i<=end;i++){
            if(visited[s[i]]==1){
                return 0;
            }
            visited[s[i]]=1;
        }
        return 1;
    }
    int lengthOfLongestSubstring(string s) {
        int n=s.length(),maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isunique(s,i,j)){
                    int len=j-i+1;
                    if(len>maxlen){
                        maxlen=len;
                    }
                }
            }
        }
    return maxlen;
    }
};
