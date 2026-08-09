class Solution {
public:

    void help(int c, string s, set<string> &st,int n){
        if(s.size() == 2*n){
            if(c == 0){
                st.insert(s);
            }
            return;
        }

        if(c > 0){
            help(c -1 , s + ")" , st , n);
            help(c +1 , s + "(" , st , n);
            return;
        }else{
            return help(c +1 , s + "(" , st , n);
        }

    }


    vector<string> generateParenthesis(int n) {
        set<string> st;
        help(0 , "" , st, n);

        vector<string> ans;

        for(auto it = st.begin() ; it!= st.end() ; it++){
            ans.push_back(*it);
        }

        return ans;
    }
};
