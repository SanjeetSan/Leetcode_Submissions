class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n <= 1){
            return false;
        }
        stack<char> st;
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                if((top == '(' && c == ')' ) || (top == '[' && c == ']') || (top == '{' && c == '}')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};