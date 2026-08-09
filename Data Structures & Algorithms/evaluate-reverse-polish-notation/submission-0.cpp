
class Solution {
public:
    int evalRPN(vector<string>& vec) {

        stack<int> st;
        for(int i = 0; i < vec.size() ; i++){
            if(vec[i] != "+" && vec[i] != "-" &&
             vec[i]!= "/" && vec[i]!= "*"){
                string x = vec[i];
                int a = stoi(x);
                st.push(a);
            }else{
                if(vec[i] == "+"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(a+b);
                }else if(vec[i] == "/"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(b/a);
                    
                }else if(vec[i] == "-"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(b-a);
                    
                }else{
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(a*b);

                }
            }
        }

        return st.top();
    }
};
