class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        
        if(s.size() == 0){
            return 0;
        }

        int x = 0; 
        mp[s[0]] = 1;

        int ans = 1;

        for(int i = 1 ; i < s.size(); i++){
            // cout<<s[i]<<" "<<mp[s[i]]<<" ---> ";
            if(mp[s[i]] > 0){
                while(s[x] != s[i]){
                    mp[s[x]]--;
                    x++;
                    // cout<<x<<","<<i<<endl;
                }
                // cout<<endl;
                mp[s[x]]--;
                x++;
                mp[s[i]]++;
                ans = max(ans , i-x+1);
            }else{
                ans = max(ans , i-x+1);
                mp[s[i]]++;
            }
        }

        return ans;

    }
};
