class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //Dynamic Length Sliding Window
        int  maxOnes = 0;
        int left = 0;
        int z = 0; //Count of Zero's
        for(int right = 0 ; right < nums.size() ; right++){
           
            //Maintain the zero count
            if(nums[right] == 0){
                z++;
            }
            //Check window validity is broken , if yes . shrink till valid
            while(z>k){
                if(nums[left] == 0){
                    z--;
                }
                left++;
            }
            //Update the max valid window
            maxOnes = max(maxOnes , right - left + 1);
        }
        return maxOnes;
    }
};