class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long low = 0, high = matrix.size() - 1;

        long row = 0;
        while (low <= high) {
            long mid = low + ((high - low) >> 1);
            if (matrix[mid][0] <= target &&
                matrix[mid][matrix[0].size() - 1] >= target) {
                row = mid;
                break;
            } else if (matrix[mid][0] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        long left = 0, right = matrix[0].size() - 1;

        while (left <= right) {
            long mid = left + ((right - left) >> 1);
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};