class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;
        int maxlen = 0 ;
        mp[0] = -1;

        for(int i=0;i<nums.size();i++){
            //0 = -1 , 1 = +1
            if(nums[i]==0)
               sum--;
            else
              sum++;

            //Same prefix sum already exstis
            if(mp.find(sum)!=mp.end()){
                int len = i - mp[sum];
                maxlen = max(maxlen,len);
            }
            else{
                //store only the first occurence
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};