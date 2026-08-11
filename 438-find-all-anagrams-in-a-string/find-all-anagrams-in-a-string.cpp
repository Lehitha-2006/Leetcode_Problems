class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char , int> m1;
        unordered_map<char , int> m2;
        vector<int> ans;
        
        
        for(char ch : p){
            m1[ch]++;
        }
        int left = 0;
        int k = p.size();

        for(int right = 0 ; right < s.size() ; right++){

            m2[s[right]]++;

            if(right - left + 1 > k){
                m2[s[left]]--;

                if(m2[s[left]]==0){
                    m2.erase(s[left]);
                }
                left++;
            }
            if(m1==m2){
                ans.push_back(left);
            }

        }
        return ans;
    }
};