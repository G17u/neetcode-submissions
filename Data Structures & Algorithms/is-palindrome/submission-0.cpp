class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> t;
        vector<char> h;
        int len = s.size();
        if(len == 0 || len == 1) return true;

        for(int i=0;i<len;i++){
            if((s[i]<='z' && s[i]>='a') || (s[i]<='9' && s[i]>='0')){
                h.push_back(s[i]);
            }else if(s[i]<='Z' && s[i]>='A'){
                h.push_back(s[i]- ('A'-'a'));
            }
        }
        len = h.size();
        for(int i=len-1;i>=0;i--){
            t.push_back(h[i]);
        }
        for(int i=0;i<len;i++){
            if(h[i]!=t[i]) return false;
        }
        return true;
    }
};
