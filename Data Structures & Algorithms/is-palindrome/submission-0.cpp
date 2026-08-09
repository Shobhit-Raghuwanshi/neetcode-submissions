class Solution {
public:
    bool isPalindrome(string s) {

        string ans;
        for(int i = 0; i < s.size() ; i++){
            if((int)s[i] < 48 || (int)s[i] > 122){
                continue;
            }
            if((int)s[i] > 57 && (int)s[i] < 65){
                continue;
            }
            if((int)s[i] > 90 && (int)s[i] < 97){
                continue;
            }
            ans += tolower(s[i]);
        }

        // cout<<ans;

        for(int i = 0; i < ans.size()/2 ; i++){
            if(ans[i] != ans[ans.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};
