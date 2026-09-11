class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> Unique;
        int n = digits.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i != j and j != k and k != i and digits[i] != 0) {
                        // int first = digits[i] * 100; int second = digits[j] * 10; 
                        // int third = digits[k]; int sum = first + second + third;
                        int Curr = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (Curr % 2 == 0) {
                            // cout << Curr << " ";
                            Unique.insert(Curr);
                        }
                    }
                }
            }
        }
        return Unique.size();
    }
};