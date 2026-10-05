/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> lst;
        ListNode* temp = head;

        while(temp != nullptr){
            lst.push_back(temp->val);
            temp = temp->next;
        }
        
        int left = 0;
        int right = lst.size() - 1;
        while(left<right){
            if(lst[left] != lst[right]){
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};