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
        //Implementation using Hare & tortoise algorithm (Fast & slow pointer)
        ListNode slow,fast;
        slow = head;
        fast = head;
        while(fast != null && fast.next != null){
            //prove slow pointer 1 step at a time
            slow = slow.next;
            //prove fast pointer 2 steps at a time
            fast = fast.next.next;
        }
        return slow;
    }
}