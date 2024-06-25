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
      ListNode  slow = head;
      ListNode fast = head;
      while(fast != null && fast.next != null)
      {
        slow = slow.next; // to move 1 step
        fast = fast.next.next; 
      }
      return slow;
    }
}

//T.C = O(n)

//S.C = O(1)
