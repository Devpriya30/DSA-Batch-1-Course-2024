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
        ListNode ptr = head;
         head = null;
        while(ptr != null)
        {
            ListNode current = ptr.next;
            ptr.next = head;
            head = ptr;
            ptr = current;

        }
        
        return head;
    }
}

//T.C = O(n)

//S.C = O(1)
