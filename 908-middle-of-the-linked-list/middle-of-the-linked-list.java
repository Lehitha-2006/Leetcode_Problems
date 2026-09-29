/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        //Naive Approach
        //Middle is just len(linkedlist) 
        //Find length , find length
        int length = 0;
        ListNode temp = head;
        while(temp != null) { temp = temp.next ; length++;}
        int middle = length/2;
        //Traverse again the middle times to land on middle
        temp = head;
        while(middle>0){
            temp = temp.next;
            middle--;
        }
        return temp;
    }
}