class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Find the first decreasing element from the right
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Step 2: If we found a decreasing element
        if (i >= 0) {

            // Find the element just greater than nums[i]
            int j = n - 1;

            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }

            // Swap them
            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the remaining part
        reverse(nums.begin() + i + 1, nums.end());
    }
};