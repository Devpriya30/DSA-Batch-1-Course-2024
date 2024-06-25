/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
       Set<ListNode> set = new HashSet<>();
        // for(ListNode current = head; current!=null; current =current.next)
        // {
        //     set.add(current);
        // } 
        for(ListNode current = head; current!=null; current = current .next)
        {
            if(set.contains(current))
            {
                return true;
            }
            set.add(current);
        }
        return false;
    }
}

//T.C = O(n)

//S.C = O(n)

