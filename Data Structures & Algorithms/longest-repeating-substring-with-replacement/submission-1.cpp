class Solution {

public:

    int characterReplacement(string s, int k) {
        unordered_map<char , int> mp;

        int i = 0;
        int j = 0;
        int maxi = 0;
        int ans = 0;
        for(; i < s.size(); i++){
            mp[s[i]]++;
            maxi = max(maxi, mp[s[i]]);

            // Window size is (i - j + 1). 
            // Total characters to replace is (Window size - frequency of most common character).
            // If this exceeds k, we must shrink the window from the left.
            while ((i - j + 1) - maxi > k) {
                mp[s[j]]--;
                j++;
                // Optimization: We don't strictly need to recalculate maxi here for the logic to work,
                // but to keep logic consistent with the sliding window pattern:
                maxi = 0;
                for(auto const& [key, val] : mp) {
                    maxi = max(maxi, val);
                }
            }

            ans = max(ans , i-j+1);
        }
        return ans;
    }
};