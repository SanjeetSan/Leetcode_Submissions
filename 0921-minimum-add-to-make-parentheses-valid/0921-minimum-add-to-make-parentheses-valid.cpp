class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        if(n == 0){
            return 0;
        }
        // int before = 0, idx = 0;
        // for(int i = 0; i < n; i++){
        //     if(s[i] == ')'){
        //         before++;
        //     }
        //     else{
        //         idx = i;
        //         break;
        //     }
        // }
        // cout << idx << endl;
        int balance = 0, addition = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                balance++;
            }
            else{
                if(balance > 0){
                    balance--;
                }
                else{
                    addition++;
                    // balance++;
                }
            }
            cout << balance << " " << addition << endl;
        }
        // cout << before << " " << balance;
        return balance + addition;
    }
};