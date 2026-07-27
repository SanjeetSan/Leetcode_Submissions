/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA == null || headB == null){
            return null;
        }
        ListNode cycle = headA;
        while(cycle.next != null){
            cycle = cycle.next;
        }
        cycle.next = headA;
        ListNode slow = headB, fast = headB;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                break;
            }
        }
        if(fast == null || fast.next == null){
            cycle.next = null;
            return null;
        }
        ListNode p1 = slow;
        ListNode p2 = headB;
        while(p1 != p2){
            p1 = p1.next;
            p2 = p2.next;
        }
        ListNode inter = p1;
        cycle.next = null;
        return inter;
    }
}