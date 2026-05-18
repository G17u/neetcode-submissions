class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int size = s.size();
        int i=0;
        int curr_len=0; int max_len=0;
        for(int j=0;j<size;j++){
            auto it = map.find(s[j]);
            if(it==map.end() || map[s[j]]==0){
                map[s[j]]=1;
                curr_len++;
            }else{
                if(curr_len>max_len) max_len = curr_len;
                while(s[i]!=s[j]){
                    map[s[i]] = 0;
                    i++;
                    curr_len--;
                }
                i++;
            }
        }
        if(curr_len>max_len) max_len = curr_len;
        return max_len;
    }
};
