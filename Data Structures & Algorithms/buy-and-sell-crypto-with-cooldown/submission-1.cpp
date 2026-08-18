class Solution {
public:

    unordered_map<int, int> dp[5001];

    int help(vector<int>& vec, int i, int holdings) {

        if (i >= vec.size()) {
            return 0;
        }

        // Already calculated
        if (dp[i].count(holdings)) {
            return dp[i][holdings];
        }

        if (holdings != -1 && vec[i] > holdings) {

            return dp[i][holdings] = max(
                help(vec, i + 1, holdings),
                vec[i] - holdings + help(vec, i + 2, -1)
            );

        } else {

            return dp[i][holdings] = max(
                help(vec, i + 1, holdings),
                help(vec, i + 1, vec[i])
            );
        }
    }

    int maxProfit(vector<int>& prices) {
        return help(prices, 0, -1);
    }
};