class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n = nums.size();

        // Put each number at its correct index
        for (int i = 0; i < n; i++) {

            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {

                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Find the first position where the number is incorrect
        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // If all 1...n are present
        return n + 1;
    }
};