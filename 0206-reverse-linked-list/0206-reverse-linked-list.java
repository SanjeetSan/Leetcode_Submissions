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
    public ListNode reverseList(ListNode head) {
        // ListNode rev = null, t = null;
        // while(head != null){
        //     t = head;
        //     head = t.next;
        //     t.next = rev;
        //     rev = t;
        // }
        // return rev;
        if(head == null ||  head.next == null){
            return head;
        }
        ListNode newh = reverseList(head.next);
        head.next.next = head;
        head.next = null;
        return newh;
    }
}